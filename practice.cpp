////
//// Created by Tony on 7/21/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int C;
//    cin >> C;
//    for (int i = 0; i < C; i++) {
//        int N, Q;
//        cin >> N >> Q;
//        unordered_map<int,int> m;
//        int mx = 0;
//        int ans = 0;
//        for (int j = 0; j < N; j++) {
//            int M;
//            cin >> M;
//            for (int k = 0; k < M; k++) {
//                int a;
//                cin >> a;
//                m[a]++;
//                if (m[a] > mx) {
//                    mx = m[a];
//                    ans = a;
//                }
//                else if (m[a] == mx && a > ans)
//                    ans = a;
//            }
//        }
//        cout << ans << "\n";
//
//    }
//}