////
//// Created by Tony on 7/15/2021.
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
//    int len;
//    cin >> len;
//    string A, B;
//    cin >> A >> B;
//    int count = 0;
//    int ans = 0;
//
//    for (int i = 0; i < len; i++) {
//        if (A[i] != B[i])
//            count++;
//        else
//            count = 0;
//        if (count == 1)
//            ans++;
//    }
//
//    cout << ans << "\n";
//
//}