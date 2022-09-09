//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x; int y;
        cin >> x >> y;
        x--;y--;
        ll ans = 0;

        ll layer = max(x,y);
        ll diagonal = 1+layer*(layer+1);
        if (x >= y) {
            if (layer % 2 == 1) {
                ans = diagonal + (layer - y);
            }
            if (layer % 2 == 0) {
                ans = diagonal + (y - layer);
            }
        }
        else {
            if (layer % 2 == 1) {
                ans = diagonal - (layer - x);
            }
            if (layer % 2 == 0) {
                ans = diagonal - (x - layer);
            }
        }

        cout << ans << "\n";
    }
}