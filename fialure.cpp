//
// Created by Tony on 8/11/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

struct component {
    int importance;
    ll parts;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int c;
        cin >> c;
        vector<component> cmpn(c);

        int zax = 0;
        ll initval = 0;
        for (int i = 0; i < c; i++) {
            component a;
            cin >> a.importance >> a.parts;
            initval += (a.parts - 1) >> 1;
            a.parts = a.parts - ((a.parts - 1) >> 1);
            cmpn[i] = a;
            zax += a.importance;
        }

        vector<ll> dp((zax - 1) / 2 + 1, initval);

        for (component j : cmpn)
            for (int i = (zax-1)/2; i >= 0; i--)
                if (i - j.importance >= 0)
                    dp[i] = max(dp[i], dp[i - j.importance] + j.parts);

        cout << dp[(zax-1)/2] << endl;

    }
}