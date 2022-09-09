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
//struct triangle {
//    ll x1;
//    ll y1;
//    ll x2;
//    ll y2;
//    ll x3;
//    ll y3;
//};
//
//struct qust {
//    ll cx;
//    ll cy;
//    ll r;
//    ll k;
//};
//
//bool inCircle(triangle a, qust b) {
//    ll dist1 = (b.cx - a.x1)*(b.cx - a.x1) + (b.cy - a.y1)*(b.cy - a.y1);
//    ll dist2 = (b.cx - a.x2)*(b.cx - a.x2) + (b.cy - a.y2)*(b.cy - a.y2);
//    ll dist3 = (b.cx - a.x3)*(b.cx - a.x3) + (b.cy - a.y3)*(b.cy - a.y3);
//    ll rad = b.r*b.r;
//
//    return dist1 <= rad && dist2 <= rad && dist3 <= rad;
//}
//
//double area(triangle a) {
//    ll penis = (a.x1 * a.y2 + a.x2 * a.y3 + a.x3 * a.y1) - (a.y1 * a.x2 + a.y2 * a.x3 + a.y3 * a.x1);
//    return abs(penis / 2.0);
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int c;
//    cin >> c;
//
//    for (int i = 0; i < c; i++) {
//        int n, m;
//        cin >> n >> m;
//        vector<triangle> v;
//        vector<qust> q;
//
//        //adding to triangle vector
//        for (int j = 0; j < n; j++) {
//            triangle t;
//            cin >> t.x1 >> t.y1 >> t.x2 >> t.y2 >> t.x3 >> t.y3;
//
//            v.push_back(t);
//        }
//
//        //adding to question vector
//        for (int j = 0; j < m; j++) {
//            qust a;
//            cin >> a.cx >> a.cy >> a.r >> a.k;
//
//            q.push_back(a);
//        }
//
//        for (int j = 0; j < m; j++) {
//            double areas[1005] = {0};
//            double ans = 0;
//            for (int k = 0; k < n; k++) {
//                if (inCircle(v[k],q[j]))
//                    areas[k] = area(v[k]);
//            }
//            sort (areas, areas+1005, [](double a, double b) {return a > b;});
//            for (int k = 0; k < q[j].k; k++)
//                ans += areas[k];
//
//            printf("%.2f\n",ans);
//        }
//
//    }
//
//
//}