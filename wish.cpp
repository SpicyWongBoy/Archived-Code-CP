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
//
//        ll ans = 0;
//
//        int n;
//        cin >> n;
//        ll a[n], b[n];
//
//        for (int j = 0; j < n; j++) {
//            cin >> a[j];
//        }
//        for (int j = 0; j < n; j++) {
//            cin >> b[j];
//        }
//
//        sort(a,a+n);
//        sort(b,b+n);
//
//        for (int j = 0; j < n; j++) {
//            ans += (a[j]+b[j])*(a[j]+b[j]);
//        }
//
//        cout << ans << "\n";
//
//    }
//
//}