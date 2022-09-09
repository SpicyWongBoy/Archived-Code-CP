#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long int lln;

lln freq[100002] = {0};
lln dp[100002] = {0};

int main() {

    lln n,a;
    cin >> n;

    for (int i = 0 ; i < n ;i++) {
        cin >> a;
        freq[a]++;
    }

    dp[0] = 0;
    dp[1] = freq[1];
    for (int i = 2; i <= 100002; i++) {
        dp[i] = max(dp[i-1],dp[i-2]+i*freq[i]);
    }
    cout << dp[100002];
}