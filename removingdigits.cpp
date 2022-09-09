//
// Created by Tony on 8/13/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> dp(n + 1, 1e9);
    dp[0] = 0;

    for (int i = 0; i <= n; i++) {
        int temp;
        int tempn = i;
        for (int j = 0; j < log10(i) + 1; j++) {
            temp = tempn % 10;
            if (i - temp >= 0)
                dp[i] = min(dp[i], dp[i - temp] + 1);
            tempn /= 10;
        }
    }

    cout << dp[n] << endl;

//    for (int i : dp)
//        cout << i << " ";
//    cout << endl;
}