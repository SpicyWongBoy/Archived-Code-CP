//
// Created by Tony on 7/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct order {
    ll win;
    int rel;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        int n, k;

        cin >> n >> k;

        ll prefix[n];
        ll sum = 0;

        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            sum += a;
            prefix[j] = sum;
        }

        order windows[n-k+1];
        for (int q = 0; q < n-k+1; q++) {
            windows[q].win = prefix[q+k-1];
            windows[q].rel = q + 1;
        }
        for (int q = 1; q < n-k+1; q++) {
            windows[q].win -= prefix[q-1];
        }
        sort (windows, windows+n-k+1, [](order a, order b) {
            if (a.win == b.win)
                return a.rel < b.rel;
            return (a.win > b.win);
        });

        for (order a : windows)
            cout << a.rel << " ";
        cout << "\n";
    }
}