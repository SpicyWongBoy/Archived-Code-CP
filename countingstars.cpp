//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

//#define endl "\n"

typedef long long ll;

int R, C;
vector<string> grid;
vector<vector<bool>> used;
vector<vector<int>> dist;
int counter = 1;
bool works = false;

struct point {
    int x; int y;
};

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

bool inbounds(point a) {
    return a.x >= 0 && a.x < R && a.y < C && a.y >= 0;
}

void floodfill(point start) {
    used[start.x][start.y] = true;
    dist[start.x][start.y] = counter;
    for (int i = 0; i < 4; i++) {
        point next{start.x+dx[i],start.y+dy[i]};
        if (inbounds(next) && !used[next.x][next.y] && grid[next.x][next.y] == '-') {
            used[next.x][next.y] = true;
            dist[next.x][next.y] = counter;
            floodfill(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int index = 1;
    while (cin >> R >> C) {
        grid.assign(R,"");
        used.assign(R,vector<bool>(C,false));
        dist.assign(R,vector<int>(C,0));
        counter = 1;
        works = false;

        for (int i = 0; i < R; i++) {
            cin >> grid[i];
        }

        for (int i = 0; i < R; i++)  {
            for (int j = 0; j < C; j++) {
                if (grid[i][j] == '-' && !used[i][j]) {
                    floodfill(point{i,j});
                    counter++;
                }
                works = false;
            }
        }

        printf("Case %d: %d\n",index,counter-1);
        index++;
//            for (vector<int> i : dist) {
//                for (int j : i) {
//                    cout << j;
//                }
//                cout << endl;
//            }
    }
}