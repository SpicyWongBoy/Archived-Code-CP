//
// Created by Tony on 7/20/2021.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int arr[520][520];
int dist[520][520];
int n,m;

struct point {
    int x;
    int y;
};

bool inbounds(point s) {
    return s.x >= 0 && s.x < n && s.y >= 0 && s.y < m;
}

//bfs
void bfs(point s) {
    queue<point> q;
    q.push(s);
    dist[s.x][s.y] = 0;
    while (!q.empty()) {
        point curr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
                point next;
                next.x = curr.x + (dx[i] * arr[curr.x][curr.y]); next.y = curr.y + (dy[i] * arr[curr.x][curr.y]);

                if (inbounds(next) && dist[next.x][next.y] == -1) {
                    q.push(next);
                    dist[next.x][next.y] = dist[curr.x][curr.y] + 1;
                }
        }

        if (dist[n-1][m-1] != -1)
            return;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    string map[n];

    for (int i = 0; i < n; i++)
        cin >> map[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = map[i][j] - '0';
            dist[i][j] = -1;
        }
    }

    point s;
    s.x = 0;
    s.y = 0;

    bfs(s);

    cout << dist[n-1][m-1] << "\n";

}