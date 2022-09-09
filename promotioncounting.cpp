//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);

    ll pre[4];
    ll post[4];
    for (int i = 0; i < 4; i++) cin >> pre[i] >> post[i];

    ll prom[4];

    memset(prom,0,sizeof prom);

    ll add = 0;
    for (int i = 3; i > 0; i--) {
        if (post[i] - pre[i] > 0)
            add += post[i]-pre[i];
        if (pre[i] - post[i] > 0)
            add -= pre[i] - post[i];
        prom[i] += add;
    }

    for (int i = 1; i < 4; i++)
        cout << prom[i] << endl;


}