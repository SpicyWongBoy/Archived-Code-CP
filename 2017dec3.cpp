//
// Created by Tony on 1/17/2022.
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

int cows[3] = {7, 7, 7};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);

    int n;
    cin >> n;

    int ans = 0;

    vector<pair<int, pair<string, string>>> q;
    vector<string> change(n);

    for (int i = 0; i < n; i++) {
        int a;
        string b;
        string c;
        cin >> a >> b >> c;
        q.push_back({a, {b, c}});
    }

    sort(q.begin(), q.end());

    pair<vector<bool>, int> highest = {{1,1,1},7};
    for (int i = 0; i < q.size(); i++) {
        if (q[i].second.first == "Mildred")
            cows[0] += stoi(q[i].second.second);
        else if (q[i].second.first == "Elsie")
            cows[1] += stoi(q[i].second.second);
        else
            cows[2] += stoi(q[i].second.second);

        highest.second = max(cows[0],max(cows[1],cows[2]));
        vector<bool> saved = highest.first;

        for (int j = 0; j < 3; j++) {
            if (cows[j] == highest.second)
                highest.first[j] = true;
            else
                highest.first[j] = false;
        }

        if (saved != highest.first)
            ans++;
    }

    cout << ans;
}
