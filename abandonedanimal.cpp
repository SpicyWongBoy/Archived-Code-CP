//
// Created by Tony on 2/24/2022.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<vector<string>> stores;
vector<string> trip;
int ans;

void dfs(int a, int indx) {
    if (indx == trip.size()) {
        ans++;
        return;
    }

    if (binary_search(stores[a].begin(),stores[a].end(),trip[indx]))
        dfs(a,indx+1);

    if (a == stores.size()-1)
        return;

    dfs(a+1,indx);
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    stores.assign(n,vector<string>());

    for (int i = 0; i < k; i++) {
        int a;
        string b;
        cin >> a >> b;
        stores[a].push_back(b);
    }

    for (int i = 0; i < n; i++)
        sort(stores[i].begin(),stores[i].end());

    int m;
    cin >> m;
    trip.assign(m,"");
    for (int i = 0; i < m; i++) cin >> trip[i];

    for (int i = 0; i < n; i++)
        dfs(i,0);

    if (ans == 0)
        cout << "impossible" << endl;
    else if (ans == 1)
        cout << "unique" << endl;
    else
        cout << "ambiguous" << endl;

//    freopen("","r",stdin);
//    freopen("","w",stdout);

}