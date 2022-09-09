//
// Created by Tony on 7/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adj;
vector<bool> used;
vector<int> dist;
int B = 0, E = 0;

void dfs(int i) {
    used[i] = true;
    bool check = true;
    for (int u : adj[i]) {
        if (!used[u]) {
            dist[u] = dist[i] + 1;
            dfs(u);
            check = false;
        }
    }
    if (check)
    {
        if (dist[i] % 2 == 0)
            E++;
        else
            B++;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        B = 0;
        E = 0;
        adj.assign(N,vector<int>());
        used.assign(N,false);
        dist.assign(N,0);
        for (int j = 0; j < N-1; j++) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        dfs(0);
        cout << E << " " << B << "\n";
    }

}