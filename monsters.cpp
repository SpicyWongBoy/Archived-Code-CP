//
// Created by Tony on 11/19/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<string> grid;
vector<string> backtrack;
vector<vector<int>> boolmap;

int dy[4] = {0, 0, -1, 1};
int dx[4] = {-1, 1, 0, 0};
string dString = "UDLR";
unordered_map<char, int> dB;
int Rdy[4] = {0, 0, 1, -1};
int Rdx[4] = {1, -1, 0, 0};
string build = "";

void win(pi A, pi start) {
    for (; A != start; A = {A.first + Rdx[dB[backtrack[A.first][A.second]]],
                            A.second + Rdy[dB[backtrack[A.first][A.second]]]})
        build += backtrack[A.first][A.second];
    reverse(build.begin(), build.end());
    cout << build.length() << endl << build;
    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    dB.insert({'U', 0});
    dB.insert({'D', 1});
    dB.insert({'L', 2});
    dB.insert({'R', 3});
    cin >> n >> m;
    grid.assign(n, "");
    backtrack.assign(n, string(m, 'Z'));
    pi start;
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    queue<pi> q;

    queue<pi> qA;

    boolmap.assign(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'M') {
                q.push({i, j});
                boolmap[i][j] = 1;
            }
            if (grid[i][j] == 'A') {
                qA.push({i, j});
                start = {i, j};
                boolmap[i][j] = 2;
            }
        }
    }
    while (!q.empty() || !qA.empty()) {
        int rep = q.size();
        for (int j = 0; j < rep; j++) {
            pi front = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                pi next = {front.first + dx[i], front.second + dy[i]};
                if (!(next.second >= 0 && next.second < m && next.first < n && next.first >= 0)) continue;
                if (boolmap[next.first][next.second] == 0 && grid[next.first][next.second] == '.') {
                    boolmap[next.first][next.second] = 1;
                    q.push(next);
                }
            }
        }
        int repA = qA.size();
        for (int j = 0; j < repA; j++) {
            pi frontA = qA.front();
            qA.pop();
            for (int i = 0; i < 4; i++) {
                pi nextA = {frontA.first + dx[i], frontA.second + dy[i]};
                if (!(nextA.second >= 0 && nextA.second < m && nextA.first < n && nextA.first >= 0)) {
                    cout << "YES" << endl;
                    win({frontA.first, frontA.second}, start);
                    return 0;
                }
                if (boolmap[nextA.first][nextA.second] == 0 && grid[nextA.first][nextA.second] == '.') {
                    boolmap[nextA.first][nextA.second] = 2;
                    backtrack[nextA.first][nextA.second] = dString[i];
                    qA.push(nextA);
                }
            }
        }
    }
    cout << "NO";
    return 0;

//    freopen("","r",stdin);
//    freopen("","w",stdout);

}