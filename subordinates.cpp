//
// Created by Tony on 3/6/2022.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<vector<int>> child;
vector<int> sub;

void dfs(int a) {
    sub[a] = 1;
    for (int c : child[a]) {
        dfs(c);
        sub[a] += sub[c];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int n;
    cin >> n;
    child.assign(n+1,vector<int>());
    sub.assign(n,0);
    for (int i = 1; i < n; i++) {
        int p;
        cin >> p;
        p--;
        child[p].push_back(i);
    }
    dfs(0);
    for (int i : sub)
        cout << i-1 << " ";
    cout << endl;

}