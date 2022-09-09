//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define x first
#define y second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("billboard.in","r",stdin);
    freopen("billboard.out","w",stdout);
    vector<vector<bool>> grid;

    grid.assign(2000,vector<bool>(2000,false));

    pi rect[3][2];

    for (int i = 0; i < 3; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 1000;
        x2 += 1000;
        y1 += 1000;
        y2 += 1000;
        rect[i][0] = {x1, y1};
        rect[i][1] = {x2, y2};
    }

    for (int i = 0; i < 2; i++) {
        for (int j = rect[i][0].x; j < rect[i][1].x; j++) {
            for (int k = rect[i][0].y; k < rect[i][1].y; k++) {
                grid[j][k] = true;
            }
        }

    }

    for (int j = rect[2][0].x; j < rect[2][1].x; j++) {
        for (int k = rect[2][0].y; k < rect[2][1].y; k++) {
            grid[j][k] = false;
        }
    }

    int count = 0;

    for (int i = 0; i < 2000; i++) {
        for (int j = 0; j < 2000; j++) {
            count += grid[i][j];
        }
    }

    cout << count << endl;

}