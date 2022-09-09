//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        ll x; ll y;
        cin >> x >> y;

        while (x > 0 && y > 0) {
            ll diff = abs(y-x);
            if (x == 2 && y == 2 || x == 1 && y == 1) {
                break;
            }
            if (x == y) {
                x %= 3;
                y %= 3;
            }
            if (y>=x) {
                y-=2*diff;
                x-=1*diff;
            }
            else{
                y-=1*diff;
                x-=2*diff;
            }
        }

        if (x == 0 && y == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}