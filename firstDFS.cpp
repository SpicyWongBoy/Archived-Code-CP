#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <queue>

using namespace std;

struct coor {
    int x;
    int y;
};

int transR[4] = {0, 0, 1, -1};
int transC[4] = {1, -1, 0, 0};

typedef long long ll;
bool vis[100][100];
string graph[100][100];

bool inbounds(int r, int c, int R, int C) {
    return (r >= 0 && r < R && c >= 0 && c < C);
}

bool adj(coor curr, coor goal) {
    return (curr.y == goal.y && abs(curr.x - goal.x) == 1 || abs(curr.y - goal.y) == 1 && curr.x == goal.x);
}

bool dfs(coor goal, coor curr, int k, int count, int R, int C) {
    if (k <= count && adj(curr, goal)) {
        return true;
    } else {
        coor pear;
        for (int i = 0; i < 4; i++) {
            pear.x = curr.x + transR[i];
            pear.y = curr.y + transC[i];
            if (inbounds(pear.x, pear.y, R, C) && !vis[pear.x][pear.y] && graph[pear.x][pear.y] != "*") {
                vis[pear.x][pear.y] = true;
                if (dfs(goal, pear, k, count + 1, R, C))
                    return true;
                vis[pear.x][pear.y] = false;
            }
        }

    }

    return false;

}

int main1() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int R, C, k, a, b;
    cin >> R >> C >> k >> a >> b;

    coor start = {a - 1, b - 1};

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> graph[i][j];
        }
    }

    vis[start.x][start.y] = true;
    if (dfs(start, start, k, 1, R, C))
        cout << "YES";
    else
        cout << "NO";
}
