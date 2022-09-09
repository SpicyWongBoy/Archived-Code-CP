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
//typedef pair<int,int> pii;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int d;
//    cin >> d;
//    for (int i = 0; i < d; i++) {
//        vector<pii> pc;
//        int n;
//        cin >> n;
//        ll ans = 0;
//        for (int j = 0; j < n; j++) {
//            int c, p;
//            cin >> c >> p;
//            pc.push_back(make_pair(p,c));
//        }
//
//        sort(pc.begin(),pc.end(), [](pii a, pii b) {
//                return a.second > b.second;
//        });
//
//        ans += pc[0].first;
//        for (int j = 0; j < n; j++) {
//            ans += pc[j].second;
//        }
//        cout << ans << "\n";
//    }
//
//
//}