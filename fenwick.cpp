//
// Created by Tony on 8/16/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

vector<ll> fw;

void update(int u, int v) {
    for (u++; u < fw.size(); u += u & -u) fw[u] += v;
}
ll query(int u) {
    ll sum = 0;
    for (u++; u; u -= u & -u) sum += fw[u];
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    fw.assign(n+1,0);

    int arr[n];
    for (int i = 0; i < n ; i++) {cin >> arr[i];update(i,arr[i]);}

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << query(b-1) - query(a-2)<< endl;
    }

}