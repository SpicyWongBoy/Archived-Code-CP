//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int R, C;
vector<string> grid;
vector<vector<bool>> used;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

bool inbounds(pi a){
    return a.f >= 0 && a.f < R && a.s >= 0 && a.s < C;
}

void floodfill(pi s) {
    for (int i = 0; i < 4; i++) {
        pi next = {s.f + dx[i], s.s + dy[i]};
        if (inbounds(next) && !used[next.f][next.s] && grid[next.f][next.s] == '.') {
            used[next.f][next.s] = true;
            floodfill(next);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);


    cin >> R >> C;

    grid.assign(R,"");
    used.assign(R,vector<bool>(C,false));

    for (string &s : grid) cin >> s;
    int counter = 0;
    for (int r = 0; r < R; r++) {
        for (int c = 0; c < C; c++) {
            if (grid[r][c] == '.' && !used[r][c]) {
                counter++;
                floodfill(pi{r,c});
            }
        }
    }

    cout << counter << endl;

}