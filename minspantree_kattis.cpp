//
// Created by Tony on 8/4/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int V, E;

struct Edge {
    int S;
    int E;
    int W;
};

vector<Edge> edges;
bool works = false;
vector<int> parent, rnk;

void make_set(int v) {
    parent[v] = v;
    rnk[v] = 0;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rnk[a] < rnk[b])
            swap(a, b);
        parent[b] = a;
        if (rnk[a] == rnk[b])
            rnk[a]++;
    }
}

ll cost = 0;
vector<Edge> ans;

void kruskal() {
    works = false;
    cost = 0;
    ans.clear();
    parent.assign(V, -1);
    rnk.assign(V, -1);
    for (int i = 0; i < V; i++) {
        make_set(i);
    }
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) { return a.W < b.W; });

    for (Edge e : edges) {
        if (find_set(e.S) != find_set(e.E)) {
            cost += e.W;
            ans.push_back(e);
            union_sets(e.S,e.E);
        }
        if (ans.size() == V-1) {
            works = true;
            return;
        }
    }

}
void printans() {
    sort(ans.begin(),ans.end(), [](Edge a, Edge b) {
        if (a.S == b.S)
            return a.E < b.E;
        else
            return a.S < b.S;
    });
    cout << cost << "\n";
    for (Edge e : ans)
        cout << e.S << " " << e.E << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        cin >> V >> E;
        if (V == 0 && E == 0)
            return 0;
        edges.clear();
        for (int i = 0; i < E; i++) {
            int S, E, W;
            cin >> S >> E >> W;
            if (S > E)
                swap(S,E);
            edges.push_back(Edge{S,E,W});
        }
        kruskal();

        if (works)
            printans();
        else
            cout << "Impossible\n";

    }

}