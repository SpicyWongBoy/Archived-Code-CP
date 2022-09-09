//
// Created by Tony on 8/16/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

vector<vector<ll>> fwofw;

void update(int x, int y, int v) {
    for (x++; x < fwofw.size(); x += x & -x)
        for (int i = y + 1; i < fwofw[x].size(); i += i & -i)
            fwofw[x][i] += v;
}

ll query(int x, int y) {
    ll sum = 0;
    for (x++; x; x -= x & -x)
        for (int j = y + 1; j; j -= j & -j)
            sum += fwofw[x][j];
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    fwofw.assign(n + 1, vector<ll>(n + 1, 0));

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
            if (s[j] == '*') update(i, j, 1);
    }


    while (q--) {
        int t;
        cin >> t;

        int x1, y1, x2, y2;
        if (t == 2) {
            cin >> x1 >> y1 >> x2 >> y2;
            x1--;
            x2--;
            y1--;
            y2--;
            cout << query(x2, y2) - query(x2, y1 - 1) - query(x1 - 1, y2) + query(x1 - 1, y1 - 1) << endl;
        } else {
            cin >> x1 >> y1;
            x1--;
            y1--;
            if (query(x1, y1) - query(x1 - 1, y1) - query(x1, y1 - 1) + query(x1 - 1, y1 - 1) == 1)
                update(x1, y1, -1);
            else
                update(x1, y1, 1);
        }
    }

}