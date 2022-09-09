////
//// Created by Tony on 8/16/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//typedef long long ll;
//
//struct point{
//    int x;
//    int y;
//};
//
//struct polygon{
//    vector<point> p;
//};
//
//double calculateOverlap2(polygon b, polygon a) {
//    double calc = 0;
//    //b is always a building so it only has two points, at the top two
//    //idea is to get the points of intersection and then recursively go through
//    //the polygons again to repeat until we have a definable value
//
//}
//
//double calculateOverlap1(vector<polygon> b, polygon a) {
//    double calc = 0;
//    for (int i = 0; i < b.sze(); i++)
//        calc += calculateOverlap2(b[i],a);
//    return calc;
//}
//
//
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    polygon b[n];
//
//    for (int i = 0; i < n; i++) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//
//        b[i] = polygon{vector<point>{point{x1,y1},point{x2,y2}}};
//
//        vector<polygon> olap;
//
//        double vis = 1.0;
//
//        for (int j = 0; j < i; j++) {
//            if (b[j].p[1].x > b[i].p[0].x && b[j].p[0].x < b[i].p[1].x)
//                olap.push_back(b[j]);
//        }
//
//        cout << calculateOverlap1(olap,b[i]) << endl;
//
//        printf("%.07f\n",vis);
//
//    }
//
//}