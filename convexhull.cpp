////
//// Created by Tony on 9/15/2021.
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
//struct ray {
//    double x, y;
//};
//
//struct p {
//    double x, y;
//};
//
//bool compPnt(p a, p b) {
//    return (a.x == b.x) ? a.y < b.y : a.x < a.y;
//}
//
//double area (ray a, ray b) {
//    return a.x*b.y - a.y*b.x;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
////    freopen("","r",stdin);
////    freopen("","w",stdout);
//
//    int n;
//    while (cin >> n){
//        if (n == 0)
//            break;
//
//        vector<p> pnts(n,{0,0});
//        for (int i = 0; i < n; i++)
//            cin >> pnts[i].x >> pnts[i].y;
//        sort(pnts.begin(),pnts.end(), &compPnt);
//
//        p A = pnts.front(), B = pnts.back();
//
//        for (int i = 1; i < n; i++){
//            if (i == n-1 || area({B.x - A.x, B.y - A.y}, {pnts[i].x - A.x, pnts[i].y - A.y} ) < 0)
//                if (i == n-1 || area({B.x - A.x, B.y - A.y}, {pnts[i].x - A.x, pnts[i].y - A.y} ) < 0)
//
//        }
//    }
//
//}