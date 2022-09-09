
#include <bits/stdc++.h>

using namespace std;
//start down
int ans = 0;
vector<string> grid;
int r;

bool inbounds(pair<int,int> a) {
    return (a.first >= 0 && a.first < r && a.second >=0 && a.second < r);
}

void dfs(pair<int,int> start,int K, bool curr) {
    if (start.first == 0 && start.second == 0) {
        if (inbounds({start.first+1,start.second}) && grid[start.first+1][start.second] == '.')
        dfs({start.first+1,start.second},K,curr);
        if (inbounds({start.first,start.second+1}) && grid[start.first][start.second+1] == '.')
        dfs({start.first,start.second+1},K,!curr);
        return;
    }
    if (start.first == r-1 && start.second == r-1)
    {
        ans++;
        return;
    }

    if (K > 0 && curr && inbounds({start.first,start.second+1}) && grid[start.first][start.second+1] == '.') // turn right
        dfs({start.first,start.second+1},K-1,!curr);

    if (K > 0 && !curr && inbounds({start.first+1,start.second}) && grid[start.first+1][start.second] == '.') // turn left
        dfs({start.first+1,start.second},K-1,!curr);

    if (inbounds({start.first+curr,start.second+!curr}) && grid[start.first+curr][start.second+!curr] == '.') // keep going
        dfs({start.first+curr,start.second+!curr},K,curr);

    return;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int K;
        cin >> r >> K;
        ans = 0;
        grid.assign(r,"");
        for (int i = 0; i < r; i++)
            cin >> grid[i];
        dfs({0,0},K,true); // true means down

        cout << ans << "\n";
    }

}