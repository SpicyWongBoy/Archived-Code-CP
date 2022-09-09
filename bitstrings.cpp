//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int mod = 1e9+7;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    ll ans = 1;

    for (int i = 0; i < n; i++)
        ans = (ans*2)%mod;
    cout << ans;
}