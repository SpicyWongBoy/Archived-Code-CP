//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int R, C;
vector<string> grid;
vector<vector<bool>> used;
vector<vector<int>> dist;
int counter = 1;

struct point {
    int x; int y;
};

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

bool inbounds(point a) {
    return a.x >= 0 && a.x < R && a.y < C && a.y >= 0;
}

void floodfill(point start, char ID) {
    used[start.x][start.y] = true;
    dist[start.x][start.y] = counter;
    for (int i = 0; i < 4; i++) {
        point next{start.x+dx[i],start.y+dy[i]};
        if (inbounds(next) && !used[next.x][next.y] && grid[next.x][next.y] == ID) {
            used[next.x][next.y] = true;
            dist[next.x][next.y] = counter;
            floodfill(next,ID);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;
    grid.assign(R,"");
    used.assign(R,vector<bool>(C,false));
    dist.assign(R,vector<int>(C,-1));

    for (int i = 0; i < R; i++) {
        cin >> grid[i];
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        point start;
        point end;
        cin >> start.x >> start.y >> end.x >> end.y;
        start.x--;start.y--;end.x--;end.y--;

        if (!used[start.x][start.y]) {
            floodfill(start,grid[start.x][start.y]);
        }
        counter++;

        if (dist[start.x][start.y] != -1 && dist[start.x][start.y] == dist[end.x][end.y])
        {
            if (grid[start.x][start.y] == '0')
                cout << "binary";
            else if (grid[start.x][start.y] == '1')
                cout << "decimal";
            else
                cout << "neither";
        }
        else
            cout << "neither";
        cout << endl;

    }

//    for (vector<int> i : dist) {
//        for ( int j : i) {
//            cout << j << " ";
//        }
//        cout << endl;
//    }




}