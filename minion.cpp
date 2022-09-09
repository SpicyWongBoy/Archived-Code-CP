//
// Created by Tony on 7/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int ans = 0;
int V, E;
vector<vector<int>> adj;
vector<bool> used;

void dfs(int start) {
    if (start == V-1)
    {
        ans = 1;
        return;
    }
    used[start] = true;
    for (int u : adj[start])
        if (!used[u])
            dfs(u);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        vector<string> ta;
        ta.assign(N,"");
        for (int j = 0; j < N; j++) {
            cin >> ta[j];
        }
        cin >> V >> E;
        adj.assign(V,vector<int>());
        used.assign(V,false);
        for (int j = 0; j < E; j++) {
            int a, b;
            string c;
            cin >> a >> b >> c;
            bool works = true;
            for (int k = 0; k < N; k++) {
                if (ta[k] == c)
                    works = false;
            }
            if (works)
            {
                adj[a].push_back(b);
                adj[b].push_back(a);
            }
        }

        dfs(0);
        cout << ans << "\n";
        ans = 0;
    }

}