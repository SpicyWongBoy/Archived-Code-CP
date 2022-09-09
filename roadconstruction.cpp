//
// Created by Tony on 8/28/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int n,m, total, mx;
vi daddy;
vi sze;

void init() {
    for (int i = 0; i <= n; i++) daddy[i] = i;
}

int find(int a) {return (a == daddy[a]) ? a : daddy[a] = find(daddy[a]);}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if (a != b) {
        total--;
        if (sze[a] < sze[b])
            swap(a,b);
        daddy[b] = a;
        sze[a] += sze[b];
        mx = max(sze[a], mx);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    cin >> n >> m;
    total = n;
    mx = 0;

    daddy.assign(n+1,0);
    sze.assign(n + 1, 1);

    init();

    while(m--){
        int a, b;
        cin >> a >> b;

        uni(a,b);
        cout << total << " " << mx << endl;
    }
}