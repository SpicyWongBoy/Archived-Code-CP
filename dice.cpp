////
//// Created by Tony on 8/10/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//typedef long long ll;
//
//vector<ll> dp(1000005,-1);
//
//int mod = 1e9+7;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N;
//    cin >> N;
//
//    dp[0] = 1;
//    dp[1] = 1;
//    dp[2] = 2;
//    dp[3] = 4;
//    dp[4] = 8;
//    dp[5] = 16;
//    dp[6] = 32;
//
//        for (int i = 7; i <= N; i++) {
//            dp[i] = (dp[i-1] + dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%mod;
//        }
//
//    cout << dp[N];
//}