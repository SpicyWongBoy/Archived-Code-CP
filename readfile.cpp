//
// Created by Tony on 8/19/2021.
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

    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);

    int a, b, x, y;

    cin >> a >> b >> x >> y;

    int case1 = abs(x-a) + abs(y-b);
    int case2 = abs(a-b);
    int case3 = abs(y-a) + abs(x-b);

    cout << min({case1,case2,case3});
}