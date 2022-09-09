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
//int C, N;
//vector<int> arr;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//
//    cin >> C >> N;
//    arr.assign(C,-1);
//
//    for (int i = 0; i < C; i++) {
//        cin >> arr[i];
//    }
//
//    sort(arr.begin(),arr.end());
//
//    vector<int> dp(N+1,1000000000);
//    dp[0] = 0;
//
//    for (int i = 0; i < N+1; i++) {
//        if (dp[i] != 1000000000)
//            continue;
//        for (int c : arr)
//            if (i-c >= 0)  {
//                dp[i] = min(dp[i],dp[i-c]+1);
//            }
//    }
////    for (int k : dp)
////        cout << k << " ";
//    if (dp[N] == 1000000000)
//        cout << "-1" << "\n";
//    else
//        cout << dp[N] << "\n";
//}
