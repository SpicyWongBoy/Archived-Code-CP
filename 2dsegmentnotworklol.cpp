//
// Created by Tony on 8/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int two_pow = 1;
int n;

vector<vector<ll>> treeoftrees;
vector<ll> tree;

void update(int p, ll v) {
    p += two_pow;
    tree[p] += v;
    for (p >>= 1; p > 0; p >>= 1)
        tree[p] = tree[p * 2] + tree[p * 2 + 1];
}

void updateBIG(int p) {
    p += two_pow;
    treeoftrees[p] = tree;
    p >>= 1;
    while (p > 0) {
        tree.assign(two_pow * 2, 0);
        for (int i = 0; i < n; i++) update(i, treeoftrees[2 * p][i + two_pow] + treeoftrees[2 * p + 1][i + two_pow]);
        treeoftrees[p] = tree;
        p >>= 1;
    }
}


ll query(int a, int b) {
    a += two_pow;
    b += two_pow;

    ll sum = 0;
    while (a <= b) {
        if (a % 2 == 1)
            sum += tree[a--];
        if (b % 2 == 0)
            sum += tree[b--];
        a >>= 1;
        b >>= 1;
    }
    return sum;
}

void queryBIG(int a, int b) {
    a += two_pow;
    b += two_pow;

    tree.assign(two_pow * 2, 0);
    while (a <= b) {
        if (a % 2 == 1) {
            for (int i = 0; i < n; i++) update(i, treeoftrees[a][i + two_pow]);
            a++;
        }
        if (b % 2 == 0) {
            for (int i = 0; i < n; i++) update(i, treeoftrees[b][i + two_pow]);
            b--;
        }
        a >>= 1;
        b >>= 1;
    }

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int q;
    cin >> n >> q;

    while (two_pow < n)
        two_pow <<= 1;

    treeoftrees.assign(two_pow * 2, vector<ll>(n, 0));
    tree.assign(two_pow*2,0);

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

//        tree.assign(two_pow * 2, 0);

        for (int j = 0; j < n; j++)
            if (s[j] == '*')
                update(j, 1);

        updateBIG(i);
    }

    for (int i = 0; i < q; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        y2--;
        x2--;

        queryBIG(x1, x2);

        cout << query(y1, y2) << endl;
    }

    return 0;

}