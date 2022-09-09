//
// Created by Tony on 8/17/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

struct point {
    int x;
    int y;
};

vector<vector<bool>> grid;
int n;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int dfs(queue<point> aliens, int steps, point move) {
    int myn = 8;
    if (steps == 8)
        return 1e9;

    int x = aliens.size();
    for (int i = 0; i < x; i++) {
        point curr = aliens.front();
        aliens.pop();
        if (!grid[curr.x + move.x][curr.y + move.y])
            aliens.push(curr);
    }

    if (aliens.empty())
        return steps;

    for (int i = 0; i < 4; i++) {
        myn = min(dfs(aliens, steps + 1, point{move.x + dx[i], move.y + dy[i]}),myn);
    }
    return myn;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;
        queue<point> aliens;
        grid.assign(n,vector<bool>(n,false));
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;
            for (int k = 0; k < n; k++) {
                if (s[k] == 'W')
                    grid[j][k] = true;
                if (s[k] == 'A')
                    aliens.push(point{j, k});
            }
        }

        cout << dfs(aliens, 0, point{0, 0}) << endl;

    }
}