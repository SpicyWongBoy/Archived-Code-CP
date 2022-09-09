////
//// Created by Tony on 7/22/2021.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct point {
//    double x;
//    double y;
//};
//
//struct Edge{int e; point w;};
//
//int V;
//
//vector<int> dist;
//vector<bool> used;
//vector<vector<Edge>> adj;
//const int INF = 1e9;
//
//double mag(point a){
//    return sqrt(a.x*a.x+a.y*a.y);
//}
//
//class Pain{
//public:
//    int operator()(Edge a, Edge b) {
//        return mag(a.w) > mag(b.w);
//    }
//};
//
//void dijkstra() {
//    priority_queue<Edge, vector<Edge>, Pain> pq;
//    pq.push(Edge{0,0});
//    dist[0] = 0;
//    while (!pq.empty()) {
//        Edge next = pq.top();
//        pq.pop();
//        if (!used[next.e]) {
//            used[next.e] = true;
//            for (Edge a : adj[next.e]) {
//                int ma = mag(a.w);
//                int mnext = mag(next.w);
//                if ((next.w + a.w) < dist[a.e]) {
//                    dist[a.e] = next.w + a.w;
//                    pq.push(Edge{a.e, a.w + next.w});
//                }
//            }
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    double x, y;
//    double ans = 0;
//    cin >> x >> y;
//    point curr{x, y};
//
//    cin >> x >> y;
//    point end{x, y};
//
//    vector<point> cannons;
//
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++) {
//        cin >> x >> y;
//        point a{x, y};
//        cannons.push_back(a);
//    }
//
//    //make edges for the dijkstra
//    V = 2+N;
//
//}