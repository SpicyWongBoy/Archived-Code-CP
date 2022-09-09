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
//int V, E;
//
//vector<bool> used;
//vector<int> dist;
//
//const int INF = 1e9;
//
//struct Edge {
//    int e;
//    int w;
//};
//
//vector<vector<Edge>> adj;
//
//class Pain {
//public:
//    int operator()(Edge a, Edge b) {
//        return a.w > b.w;
//    }
//};
//
//void dijkstra(int s) {
//    priority_queue<Edge, vector<Edge>, Pain> pq;
//    pq.push(Edge{s, 0});
//    dist[s] = 0;
//    while (!pq.empty()) {
//        Edge next = pq.top();
//        pq.pop();
//
//        if (!used[next.e]) {
//            used[next.e] = true;
//
//            for (Edge a : adj[next.e]) {
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
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//
//        int q;
//        cin >> V >> E >> q;
//
//        adj.assign(V, vector<Edge>());
//        dist.assign(V, INF);
//        used.assign(V, false);
//
//        for (int j = 0; j < E; j++) {
//            int x, y, d;
//
//            cin >> x >> y >> d;
//
//            x--;
//            y--;
//
//            adj[x].push_back(Edge{y, d});
//            adj[y].push_back(Edge{x, d});
//        }
//
//        dijkstra(0);
//        for (int j = 0; j < q; j++) {
//            int query;
//            cin >> query;
//            query--;
//
//            cout << dist[query] << "\n";
//        }
//
//    }
//
//}