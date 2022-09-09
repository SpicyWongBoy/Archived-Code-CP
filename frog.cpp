//
// Created by Tony on 7/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[3] = {1,1,0};
int dy[3] = {0,1,1};
int grid[105][105];
bool used[105][105];
int n,m;
ll dp[105][105];

struct point{
    int x;
    int y;
};

bool inbounds(point a) {
    return a.x >= 0 && a.x < n && a.y >= 0 && a.y < m;
}

ll dfs(point curr){
    ll mx = 0;
    if (curr.x == n-1 && curr.y == m-1)
        return 0;
    if (dp[curr.x][curr.y] != -1) {
        return dp[curr.x][curr.y];
    }
    used[curr.x][curr.y] = true;
    for (int i = 0; i < 3; i++) {
        point next;
        next.x = curr.x+dx[i]; next.y = curr.y+dy[i];
        if (inbounds(next) && !used[next.x][next.y]) {
            if (i != 1)
                mx = max(dfs(next)+grid[next.x][next.y],mx);
            else
                mx = max(dfs(next)+2*grid[next.x][next.y],mx);
        }

    }
    used[curr.x][curr.y] = false;
    return dp[curr.x][curr.y] = mx;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        cin >> n >> m;

        for (int j = 0; j < 105; j++) {
            for (int k = 0; k <105; k++) {
                grid[j][k] = -1;
                used[j][k] = false;
                dp[j][k] = -1;
            }
        }
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                cin >> grid[j][k];
            }
        }

        point start; start.x = 0; start.y = 0;
        dfs(start);

        cout << dp[0][0] << "\n";
    }

}