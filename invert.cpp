#include <bits/stdc++.h>

using namespace std;

int main() {
    int w;
    cin >> w;
    for (int i = 0; i < w; i++) {

        int r, c, k;
        cin >> r >> c >> k;

        vector<string> grid(r,"");
        vector<int> earth(c,0);
        for (int j = 0; j < r; j++)
            cin >> grid[j];

        for (int j = 0; j < r; j++)
            for (int zzz = 0; zzz < c; zzz++)
                if (grid[j][zzz] == '#')
                    earth[zzz]++;
        vector<int> rearth(c,0);
        for (int j = 0; j < c; j++)
            rearth[j] = r-earth[j];

        bool grav = 0; //when 0 then normal earth, when 1 then inverted earth;
        int ans = 0;

        for (int currc=0;currc < c-1;) {
            if (grav == 0 && earth[currc+1] - earth[currc] <= k)
                currc++;
            else if (grav == 1 && rearth[currc+1] - rearth[currc] <= k)
                currc++;
            else {
                grav = !grav;
                ans++;
            }
        }
        printf("World #%d: %d\n",i+1,ans);

    }

}