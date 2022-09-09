//
// Created by Tony on 8/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define r first
#define c second
#define eb emplace_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<vi> adj;
vector<int> teams;

void dfs(int s) {
    for (int e : adj[s]) {
        if (teams[s] == teams[e])
        {
            cout << "IMPOSSIBLE";
            exit(0);
        }
        if (teams[e] == 0)
        {
            teams[e] = 3 - teams[s];
            dfs(e);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int n, m;
    cin >> n >> m;

    adj.assign(n+1,vi());

    while (m--) {
        int a, b;
        cin >> a >> b;
        adj[a].eb(b);
        adj[b].eb(a);
    }

    teams.assign(n+1,0);

    for (int i = 1; i <= n; i++)
        if (teams[i] == 0)
        {
            teams[i] = 1;
            dfs(i);
        }

    for (int i = 1; i <= n; i++)
        cout << teams[i] << " ";
    return 0;
}