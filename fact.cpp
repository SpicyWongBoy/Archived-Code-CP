//
// Created by Tony on 7/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T, n;

    cin >> T;

    for (int i = 0 ; i < T; i++) {

        cin >> n;

        if (n == 0)
        {
            cout << 1 << endl;
            continue;
        }

        ll ans = 1;

        for (int j = 1; j <= n; j++) {
            ans *= j;
        }
        cout << ans << endl;

    }


}