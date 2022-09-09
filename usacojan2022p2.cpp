////
//// Created by Tony on 1/29/2022.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//#define f first
//#define s second
//#define eb emplace_back
//#define mp make_pair
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef vector<int> vi;
//
//bool beats(vector<int> A, vector<int> B) {
//    int AbeatsB = 0;
//    int BbeatsA = 0;
//    for (int i = 0; i < 4; i++)
//        for (int j = 0; j < 4; j++)
//            if (A[i] > B[j])
//                AbeatsB++;
//    for (int i = 0; i < 4; i++)
//        for (int j = 0; j < 4; j++)
//            if (B[i] > A[j])
//                BbeatsA++;
//    return AbeatsB > BbeatsA;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
////    freopen("","r",stdin);
////    freopen("","w",stdout);
//
//    int t;
//    cin >> t;
//    while (t--) {
//        vector<int> A(4,0);
//        vector<int> B(4,0);
//        vector<int> C(4,0);
//        for (int i = 0; i < 4; i++)
//            cin >> A[i];
//        for (int i = 0; i < 4; i++)
//            cin >> B[i];
//        bool yay = false;
//        for (int a = 1; a <= 10; a++) {
//            for (int b = 1; b <= 10; b++) {
//                for (int c = 1; c <= 10; c++) {
//                    for (int d = 1; d <= 10; d++) {
//                        C[0] = a;
//                        C[1] = b;
//                        C[2] = c;
//                        C[3] = d;
//                        if (beats(A,B) && beats(C,A) && beats(B,C)) {
//                            cout << "yes" << endl;
//                            yay = true;
//                            a = 999; b = 999; c = 999; d = 999;
//                        }
//                        else if (beats(B,A) && beats(C,B) && beats(A,C)) {
//                            cout << "yes" << endl;
//                            yay = true;
//                            a = 999; b = 999; c = 999; d = 999;
//                        }
//                    }
//                }
//            }
//        }
//        if (!yay)
//            cout << "no" << endl;
//
//    }
//}