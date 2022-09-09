//
// Created by Tony on 8/18/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int R, C;


bool inbounds(pi p) {
    return p.first < R && p.first >= 0 && p.second < C && p.second >= 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> R >> C;

    queue<pi> grass;
    vector<string> grid(R,"");
    int ans = 0;
    set<vector<pi>> cows;

    for (int i = 0; i < R; i++) {
        string s;
        cin >> s;
        grid[i] = s;
        for (int j = 0; j < s.size(); j++)
            if (s[j] == 'G')
                grass.push(pi{i, j});
    }

    while (!grass.empty()) {
        pi curr = grass.front();
        grass.pop();
        vector<pi> v;
        for (int i = 0; i < 4; i++) {
            pi next = {curr.first+dx[i],curr.second+dy[i]};
            if (inbounds(next) && grid[next.first][next.second] == 'C')
                v.emplace_back(next);
        }
        if (v.size() > 2)
            ans++;
        if (v.size() == 2) {
            sort(v.begin(),v.end());
            cows.insert(v);
        }

    }

    cout << cows.size()+ans << endl;


}