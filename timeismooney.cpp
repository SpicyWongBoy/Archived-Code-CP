//
// Created by Tony on 8/19/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

ll dp(vi gains, vector<vi> adj, int N, int C) {
    ll dp[1005][N+5];

    memset(dp, -1, sizeof dp);
    dp[0][1] = 0;
    ll ans = 0;
    for (int i = 0; i < 1003; i++) {
        for (int j = 1; j <= N; j++) {
            if(dp[i][j] == -1) continue;
            if (j == 1) ans = max(ans,dp[i][j] - C*i*i);
            for (int e : adj[j])
                //max is used to check if there are more than 1 path going to the same node, then take the better path :)
                dp[i+1][e] = max(dp[i+1][e],gains[e]+dp[i][j]);
        }
    }

    return ans;

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("time.in","r",stdin);
//    freopen("time.out","w",stdout);

    int N, M, C;
    cin >> N >> M >> C;

    vi gains(N+1);
    vector<vi> adj(N+1);

    for (int i = 1; i <= N; i++) cin >> gains[i];

    while (M--) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    cout << dp(gains,adj,N, C) << endl;

}