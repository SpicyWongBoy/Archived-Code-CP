////
//// Created by Tony on 7/22/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct b{
//    int l;
//    int w;
//};
//
//int N;
//vector<b> polygon;
//
//int f(int i, int j) {
//    if (i == j) return 0;
//
////    int sum = 0, mx = 0;
////    for (int k = i; k <= j; k++) {
////        sum += polygon[k].l;
////        mx = max(mx,polygon[k].w);
////    }
//
//    int ans = 1000000000;
//    for (int split = i; split < j; split++) {
//        int leftCost = f(i,split);
//        int rightCost = f(split+1,j);
//        int totalCost = leftCost + rightCost;
//        ans = min(ans,totalCost);
//    }
//    return ans;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    cin >> N;
//
//    for (int i = 0; i < N; i++) {
//        int l, w;
//        polygon.push_back(b{l,w});
//    }
//
//    cout << f(0,N) << "\n";
//
//}