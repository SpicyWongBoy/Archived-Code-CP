//
// Created by Tony on 7/22/2021.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int V, E;

// int s (source), int e (edge; path to next node), int w (weight)
struct Edge {
    int s;
    int e;
    int w;
};

vector<Edge> edges;
bool works = false;

vector<int> p,r;

void make_set(int v) {
    p[v] = v;
    r[v] = 0;
}

int find_set(int v) {
    if (v == p[v])
        return v;
    return p[v] = find_set(p[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (r[a] < r[b])
            swap(a,b);
        p[b] = a;
        if (r[a] == r[b])
            r[a]++;
    }
}

ll cost = 0;
vector<Edge> result;

void kruskal() {
    works = false;
    cost = 0;
    result.clear();
    p.assign(V,-1);
    r.assign(V,-1);

    for (int i = 0; i < V; i++) {
        make_set(i);
    }

    sort(edges.begin(),edges.end(), [](Edge a, Edge b) {return a.w < b.w;});

    for (Edge e : edges) {
        if (find_set(e.s) != find_set(e.e)) {
            cost += e.w;
            result.push_back(e);
            union_sets(e.s,e.e);
        }
        //check if we have found the MST
        if (result.size() == V-1) {
            works = true;
            return;
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C;
    cin >> C;
    for (int i = 0; i < C; i++) {
        cin >> V >> E;

        if (V == 1)
        {
            cout << "Campus #" << i+1 << ": " << 0 << "\n";
            continue;
        }

        edges.clear();

        for (int j = 0; j < E; j++) {
            int s, e, w;
            cin >> s >> e >> w;
            //zero indexing the input
            s--; e--;
            edges.push_back(Edge{s,e,w});
        }

        kruskal();

        cout << "Campus #" << i+1 << ": ";
        if (works)
            cout << cost << "\n";
        else
            cout << "I'm a programmer, not a miracle worker!\n";
    }

}