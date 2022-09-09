//
// Created by Tony on 8/16/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

vector<ll> tree;
ll two_pow = 1;

void update(ll u, ll v) {
    u += two_pow;
    tree[u] = v;
    for (u >>= 1; u > 0; u >>= 1)
        tree[u] = max(tree[2 * u],tree[2 * u + 1]);
}

ll query(ll v) {
    ll p = 1;
    do {
        if (v > tree[p])
            return -1;
        if (v <= tree[2*p])
            p <<= 1;
        else if (v <= tree[2*p+1])
            p = (p<<1) + 1;
    } while (p < two_pow);
    return p-two_pow;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    while (two_pow < n)
        two_pow <<= 1;

    tree.assign(two_pow * 2, 0);
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        update(i, arr[i]);
    }

    while (m--) {
        ll q;
        cin >> q;
        ll k = query(q);
        cout << k + 1 << " ";
        if (k == -1)
            continue;
        else
            update(k, tree[k + two_pow] - q);
    }

}