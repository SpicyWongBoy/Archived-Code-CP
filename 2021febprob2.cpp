//
// Created by Tony on 12/18/2021.
//

#include <bits/stdc++.h>

using namespace std;

int grid[1005][1005];
bool cows[1005][1005];

int dx[5] = {0,0,1,-1};
int dy[5] = {1,-1,0,0};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    memset(grid,0,sizeof grid);
    memset(cows,0,sizeof cows);

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        cows[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            pair<int,int> next = {x+dx[i],y+dy[i]};
            if (next.first >= 0 && next.second >= 0) {
                if (grid[next.first][next.second] == 2 && cows[next.first][next.second])
                    ans++;
                else if (grid[next.first][next.second] == 3 && cows[next.first][next.second])
                    ans--;
                grid[next.first][next.second]++;
            }
        }

        cout << ans << endl;
    }

}