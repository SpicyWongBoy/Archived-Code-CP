//
// Created by Tony on 8/10/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int mod = 1e9+7;

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    vector<ll> dp(x+1);

    for (int i = 0; i < n; i++)
        cin >> coins[i];

    dp[0] = 1;

    for (int i = 1; i < x+1; i++) {
        for (int j : coins) {
            if (i-j >= 0)
                dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }

    cout << dp[x] << endl;

    //    for (int i = 0; i < x+1; i++) {
    //        cout << i << ": " << dp[i] << "\n";
    //    }

}