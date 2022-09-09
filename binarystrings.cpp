////
//// Created by Tony on 8/5/2021.
////
//
//
//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//typedef long long ll;
//
//int mod = 1e9 + 7;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//
//        int N, K;
//        cin >> N >> K;
//        ll sum = 1;
//
//        for (int j = 0; j < N; j++) {
//            unordered_set<int> fun;
//            int A;
//            cin >> A;
//
//            fun.insert(A);
//            //loop through numbers using bitwise
//            for (int k = 0; k < K; k++) {
//                int odd = A % 2;
//                A = A >> 1;
//                if (odd == 1) A += 1 << (K-1);
//                fun.insert(A);
//            }
//            sum = sum*fun.size()%mod;
//        }
//
//        cout << sum << "\n";
//    }
//
//
//}