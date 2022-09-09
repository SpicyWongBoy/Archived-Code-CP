////
//// Created by Tony on 8/14/2021.
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
//typedef vector<int> vi;
//
//int dp(int n, int m, vi &arr) {
//    int dp[n + 5][m + 5];
//
//    memset(dp, 0, sizeof dp);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            //base case initialization can't do it outside incase the first array value is less than m :(
//            if (i == 1) {
//                if (arr[i] == j || arr[i] == 0)
//                    dp[i][j] = 1; // take if
//                else
//                    dp[i][j] = 0;
//            }
//            else if (arr[i] == 0 || arr[i] == j)
//                dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
//        }
//    }
//
//    int ans = 0;
//    for (int i = 1; i <= m; i++)
//        ans += dp[n][i];
//    return ans;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, m;
//    cin >> n >> m;
//
//    vi arr(n+1);
//    for (int i = 1; i <= n; i++) cin >> arr[i];
//
//    cout << dp(n,m,arr) << endl;
//
//}