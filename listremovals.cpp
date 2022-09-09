//
// Created by Tony on 8/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int two_pow = 1;
vector<int> tree;

void update(int u, int v) {
    u += two_pow;
    tree[u] = v;
    u >>= 1;
    while (u > 0) {
        tree[u] = tree[2 * u] + tree[2 * u + 1];
        u >>= 1;
    }
}

int query(int u) {
    u++;
    int pointer = 1;
    while (u != 0) {
        if (pointer >= two_pow && u == 1 && tree[pointer] == 1)
            break;
        if (u <= tree[pointer])
            pointer <<= 1;
        else if (u > tree[pointer]){
            u -= tree[pointer];
            pointer++;
        }
    }
    return pointer;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;


    vector<int> arr;


    while (two_pow < n)
        two_pow <<= 1;

    arr.assign(n, 0);
    tree.assign(2 * two_pow, 0);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        arr[i] = a;
        update(i, 1);
    }

    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        q--;

        int indx = query(q) - two_pow;

        cout << arr[indx] << " ";

        update(indx, 0);
    }


}