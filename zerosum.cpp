////
//// Created by Tony on 7/23/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//int exclusiveorfrom1 (int n) {
//    if (n % 4 == 0)
//        return n;
//    if (n % 4 == 1)
//        return 1;
//    if (n % 4 == 2)
//        return n+1;
//    else
//        return 0;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        int Q;
//        cin >> Q;
//        for (int j = 0; j < Q; j++) {
//            int L, R;
//            cin >> L >> R;
//            //since n^n = 0, we cancel out
//            int check = exclusiveorfrom1(L-1)^exclusiveorfrom1(R);
//
//            if (check == 0)
//                cout << "NO" << "\n";
//            else
//                cout << "YES" << "\n";
//        }
//    }
//
//
//}