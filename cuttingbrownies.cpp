////
//// Created by Tony on 7/22/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//int maxB, maxD;
//int dp[505][505][2];
//// 3d dimension [0] denotes who is on that turn [1] denotes if that player wins or loses
//// 0 for Henry, 1 for Vicky
//// 0 for lose, 1 for win
//// either Can Win or Cannot Win
//int buildup(int B, int D) {
//    int winner = 0;
//    cout << B << " " << D << "\t";
//    if (B == 1 && D == 1) {
//        cout << dp[maxB][maxD][0] << " " << dp[B][D][0] << "\n";
//        if (dp[maxB][maxD][0] != dp[B][D][0])
//            winner = 1;
//        return dp[B][D][1] = 0;
//    }
//
//    if (dp[B][D][0] == 1) {
//        for (int i = 1; i < B; i++) {
//            dp[B-i][D][0] = 1 - dp[B][D][0];
//            dp[i][D][0] = 1 - dp[B][D][0];
//            dp[B][D][1] = max(buildup(i,D),buildup(B-i,D));
//        }
//    }
//    else
//    {
//        for (int i = 1; i < D; i++) {
//            dp[B][D-i][0] = 1 - dp[B][D][0];
//            dp[B][i][0] = 1 - dp[B][D][0];
//            dp[B][D][1] = max(buildup(B,i),buildup(B,D-i));
//        }
//    }
//
//    return dp[B][D][1] = winner;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int C;
//    cin >> C;
//    for (int i = 0; i < C; i++) {
//        int B,D;
//        cin >> B >> D;
//        string name;
//        cin >> name;
//        maxB = D;
//        maxD = B;
//        for (int j = 0; j < D; j++)
//            for (int k = 0; k < B; k++)
//                for (int z = 0; z < 2; z++)
//                    dp[j][k][z] = -1;
//
//        if (name == "Harry")
//            dp[D][B][0] = 0;
//        else
//            dp[D][B][0] = 1;
//
//        buildup(D,B);
//        cout << "\n";
//
//    }
//
//}