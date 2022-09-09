//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define x first
#define y second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<vi> adj;
vector<bool> used;

void dfs(int s) {
    used[s] = true;
    for (auto e : adj[s])
        if (!used[e]) {
            used[e] = true;
            dfs(e);
        }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int cities, roads;
    cin >> cities >> roads;

    adj.assign(cities+1,vi());
    used.assign(cities+1,false);

    while (roads--) {
        int a, b;
        cin >> a >> b;

        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }

    vector<pi> sol;

    dfs(1);

    for (int i = 1; i <= cities; i++) {
        if (!used[i]) {
            sol.emplace_back(pi{i-1,i});
            dfs(i);
        }
    }

    cout << sol.size() << endl;

    for (auto i : sol)
        cout << i.x << " " << i.y << endl;
}