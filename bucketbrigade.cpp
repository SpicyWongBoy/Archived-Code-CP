//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
string grid[10];
int dist[10][10];

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool inbounds(pi a){
    return a.first >= 0 && a.first < 10 && a.second >= 0 && a.second < 10;
}

void bfs(pi start) {
    bool used[10][10];
    memset(used, false, sizeof used);

    queue<pi> q;
    q.push(start);
    used[start.first][start.second] = true;
    while (q.size()) {
        pi curr = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            pi next = {curr.first+dx[i],curr.second+dy[i]};
            if (inbounds(next) && grid[next.first][next.second] != 'R' && !used[next.first][next.second])
            {
                dist[next.first][next.second] = 1+dist[curr.first][curr.second];
                used[next.first][next.second] = true;
                if (grid[next.first][next.second] == 'B') {
                    cout << dist[curr.first][curr.second] << endl;
                    return;
                }
                q.push(next);
            }

        }
    }

}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("buckets.in","r",stdin);
    freopen("buckets.out","w",stdout);

    for (string &i : grid) cin >> i;

    pi start;

    memset(dist, 0, sizeof dist);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (grid[i][j] == 'L')
                start = {i, j};
        }
    }

    bfs(start);
}