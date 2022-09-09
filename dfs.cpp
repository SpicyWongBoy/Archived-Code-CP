//
// Created by Tony on 7/20/2021.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adj;
vector<bool> used;
int V;

void addEdge(int a, int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void dfs(int i) {
    used[i] = true;
    cout << i << " ";
    for (int u : adj[i]) {
        if(!used[u])
            dfs(u);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    V = 5;
    used.assign(V, false);
    adj.assign(V,vector<int>());

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    /***
     * looks something like this
     *  0 - 1 \
     *  | / |  2
     *  4 - 3 /
     */
    for (int i = 0; i < V; i++) {
        if (!used[i])
            dfs(i);
    }
    return 0;
}
