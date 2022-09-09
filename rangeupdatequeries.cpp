//
// Created by Tony on 8/11/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

vector<ll> tree;
int two_pow = 1;

void update(int u, int v) {
    u += two_pow;
    tree[u] += v;
    u /= 2;
    while (u > 0) {
        tree[u] = tree[2*u]+tree[2*u+1];
        u /= 2;
    }
}

void rangeUpdate(int a, int b, int v) {
    update(a, v);
    if (b+two_pow+1 == two_pow*2) return;
    update(b+1, -v);
}

ll query(int b) {
    int a = 0;
    a += two_pow;
    b += two_pow;

    ll sum = 0;
    while (a <= b) {
        if (a % 2 == 1) {
            sum += tree[a];
            a++;
        }
        if (b % 2 == 0) {
            sum += tree[b];
            b--;
        }
        a /= 2;
        b /= 2;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    while (two_pow < n)
        two_pow *= 2;

    vector<int> arr(n);
    vector<int> diff(n);
    tree.assign(2 * two_pow, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    diff[0] = arr[0];
    for (int j = 1; j < n; j++) {
        diff[j] = arr[j] - arr[j - 1];
    }

    for (int i = 0; i < n; i++)
        update(i, diff[i]);

    for (int i = 0; i < q; i++) {
        int a, b, c, v;
        cin >> a;

        if (a == 1) {
            cin >> b >> c >> v;
            rangeUpdate(b - 1, c - 1, v);
        } else {
            cin >> b;
            cout << query(b - 1) << "\n";
        }
        //        for (int i : tree)
        //            cout << i << " ";
        //        cout << endl;
    }
    /*
    8 4
    3 2 4 5 1 1 5 3
    2 1 4
    2 5 6
    1 3 1
    2 1 4
     */

}