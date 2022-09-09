//
// Created by Tony on 8/29/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int t;
    cin >> t;

    while (t--) {
        int c,d;
        cin >> c >> d;

        if (c == 0 && d == 0)
            cout << 0;
        else if ((c-d) == 0)
            cout << 1;
        else if (abs(c-d) % 2 == 1 || abs(c-d) == 1)
            cout << -1;
        else
            cout << 2;

        cout << endl;
    }

}