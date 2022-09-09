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

vector<string> grid;
vector<vector<bool>> used;
vector<vector<int>> dist;
vector<vector<int>> prevStep;

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
string ds = "RLUD";
int R, C;

bool inbounds(pi a){
    return a.f >= 0 && a.s < C && a.f < R && a.s >= 0;
}

string goBack(pi s) {
    queue<pi> q;
    q.push(s);
    string build = "";
    while (q.size()) {
        pi curr = q.front();
        q.pop();
        if (prevStep[curr.f][curr.s] == -1)
            break;
        q.push({curr.f-dx[prevStep[curr.f][curr.s]],curr.s-dy[prevStep[curr.f][curr.s]]});
        build += ds[prevStep[curr.f][curr.s]];
    }
    reverse(build.begin(),build.end());
    return build;
}

void bfs(pi s) {
    queue<pi> q;
    q.push(s);
    used[s.f][s.s] = true;
    while (q.size()) {
        pi curr = q.front();
        q.pop();
        if (grid[curr.f][curr.s] == 'B') {
            cout << "YES\n";
            cout << dist[curr.f][curr.s] << endl;
            cout << goBack(curr);
            exit(0);
        }
        for (int i = 0; i < 4; i++) {
            pi n = {curr.f+dx[i],curr.s+dy[i]};
            if (inbounds(n) && !used[n.f][n.s] && grid[n.f][n.s] != '#')
            {
                prevStep[n.f][n.s] = i;
                dist[n.f][n.s] = dist[curr.f][curr.s] + 1;
                used[n.f][n.s] = true;
                q.push(n);
            }
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
    dist.assign(R,vector<int>(C,0));
    prevStep.assign(R,vector<int>(C,-1));

    for (string &s : grid) cin >> s;

    for (int r = 0; r < R; r++){
        for (int c = 0; c < C; c++) {
            if (grid[r][c] == 'A') {
                bfs(pi{r,c});
            }
        }
    }

    cout << "NO";
    return 0;
}