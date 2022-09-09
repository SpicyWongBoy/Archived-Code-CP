////
//// Created by Tony on 7/16/2021.
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
//    cin >>C;
//
//
//    for (int i = 0; i<C;i++) {
//        int P, W;
//        cin >> P >> W;
//        ll sum = 0;
//
//        int arr[P];
//
//        for (int j = 0; j < P; j++)
//            cin >> arr[j];
//
//        sort (arr, arr+P, [](int a, int b) {return a > b;});
//        int save = arr[0];
//        sum += arr[0];
//        for (int j : arr) {
//            if (save - W >= j) {
//                save = j;
//                sum += j;
//            }
//        }
//
//        cout << sum << "\n";
//    }
//
//
//}