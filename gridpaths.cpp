//
// Created by Tony on 8/13/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

string grid[1000];
int distdp[1000][1000];
int n;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> grid[i];


    if (grid[0][0] == '*')
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '*') continue;
            if (i == 0 && j == 0)
                distdp[i][j] = 1;
            else {
                if (i > 0) distdp[i][j] = (distdp[i][j] + distdp[i-1][j]) % 1000000007;
                if (j > 0) distdp[i][j] = (distdp[i][j] + distdp[i][j-1]) % 1000000007;
            }
        }

    }

    cout << distdp[n-1][n-1] << endl;
    return 0;