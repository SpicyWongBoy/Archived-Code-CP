//
// Created by Tony on 7/20/2021.
//


#include <bits/stdc++.h>


using namespace std;

typedef long long ll;

int V, E;


vector<bool> used;
vector<vector<int>> dist;
const int INF = 1e9;

struct Edge {int e;int w;};

vector<vector<Edge>> adj;

class Pain{
public:
    int operator()(Edge a, Edge b) {
        return a.w > b.w;
    }
};

void dijkstra(int s, int j) {
    priority_queue<Edge, vector<Edge>, Pain> pq;
    pq.push(Edge{s, 0});
    dist[j][s] = 0;
    while (!pq.empty()) {
        Edge next = pq.top();
        pq.pop();
		
        if (!used[next.e]) {
        used[next.e] = true;

			for (Edge a : adj[next.e]) {
				if ((next.w + a.w) < dist[a.e]) {
					dist[j][a.e] = next.w + a.w;
					pq.push(Edge{a.e, a.w + next.w});
				}
			}
		}
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> V >> E;
    adj.assign(V, vector<Edge>());
	dist.assign(V, vector<int>(V,INF));
	
    for (int j = 0; j < E; j++) {
        int x, y, d;
        cin >> x >> y >> d;
        adj[x].push_back(Edge{y, d});
		adj[y].push_back(Edge{x, d});
    }
	
	//build shortestdist 2d array
	for (int j = 0; j < V; j++) {
		used.assign(V,false);
		dijkstra(j,j);
	}

	//if finding the distance from many points to one point, just calculate dijkstra for that one point
	//and query reference the other points
	for (vector<int> a : dist) {
		for (int b : a) {
			cout << b << " ";
		}
		cout << "\n";
	}
	

}