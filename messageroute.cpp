//
// Created by Tony on 8/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define r first
#define c second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int n, m;
vector<vi> adj;
vector<bool> used;
vector<int> prevStep;
vector<int> ans;
vi dist;

void stepBack(int curr) {
    if (prevStep[curr] != -1) {
        ans.emplace_back(prevStep[curr]);
        stepBack(prevStep[curr]);
    }
}

void bfs() {
    queue<int> q;
    q.push(1);
    used.assign(n+1,false);
    dist.assign(n+1,1);
    prevStep.assign(n+1,-1);
    used[1] = true;
    while(!q.empty()) {
        int curr = q.front();
        q.pop();
        if (curr == n)
        {
            cout << dist[curr] << endl;
            ans.push_back(curr);
            stepBack(curr);
            reverse(ans.begin(),ans.end());
            for (int i : ans)
                cout << i << " ";
            exit(0);
        }
        for (int e : adj[curr])
        {
            if (!used[e]) {
                used[e] = true;
                dist[e] = dist[curr]+1;
                prevStep[e] = curr;
                q.push(e);
            }
        }

    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);


    cin >> n >> m;
    adj.assign(n + 1, vi());

    while (m--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bfs();

    cout << "IMPOSSIBLE";

    return 0;
}