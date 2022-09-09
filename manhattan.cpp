////
//// Created by Tony on 7/14/2021.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct coor {
//    int x;
//    int y;
//    ll mdb = 0;
//    ll mde = 0;
//    int ID;
//};
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int c;
//    cin >> c;
//
//    for (int i = 0; i < c; i++) {
//        int n;
//        coor b, e;
//
//        vector<coor> points;
//
//        cin >> n >> b.x >> b.y >> e.x >> e.y;
//
//        for (int j = 0; j < n; j++) {
//            coor point;
//            cin >> point.x >> point.y;
//            point.ID = j;
//
//            point.mdb = abs(point.x - b.x) + abs(point.y - b.y);
//            point.mde = abs(point.x - e.x) + abs(point.y - e.y);
//
//            points.push_back(point);
//
//        }
//
//        sort(points.begin(), points.end(), [](coor a, coor b) {
//            ll maxa = max(a.mdb, a.mde);
//            ll maxb = max(b.mdb, b.mde);
//
//            ll diffa = abs(a.mdb - a.mde);
//            ll diffb = abs(a.mdb - a.mde);
//
//            if (maxa != maxb)
//                return maxa < maxb;
//            else if (maxa == maxb)
//                return diffa < diffb;
//            else
//                return a.ID < b.ID;
//
//        });
//
//        for (coor apt : points)
//            cout << apt.x << " " << apt.y << "\n";
//
//    }
//
//}
