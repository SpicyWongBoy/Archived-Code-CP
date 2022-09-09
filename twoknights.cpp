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

    ll n;
    cin >> n;

    ll ans[n+10];
    ans[1] = 0;
    ans[2] = 12;
    ans[3] = 56;
    ans[4] = 96*2;
    ans[5] = 252*2;
    ans[6] = 550*2;
    ans[7] = 1056*2;

    for (ll i = 5; i <= n; i+=1) {
        ans[i] = 4*(4*(i*i-1)-12) + ((i-4)*4)*(2*(i*i-1)-10) + (i-4)*(i-4)*(i*i-9);
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i]/2 << endl;
    }

}