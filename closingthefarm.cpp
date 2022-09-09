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

int n,m;

vi daddy;
vi sze;
vector<vi> adj;
vector<bool> used;
int mx;

void init() {for(int i = 0; i <= n; i++) daddy[i] = i;}

int find(int a) {return (a == daddy[a]) ? a : daddy[a] = find(daddy[a]);}

void uni(int a, int b){
    a = find(a);
    b = find(b);
    if (a != b) {
        if (sze[a] < sze[b])
            swap(a, b);
        daddy[b] = a;
        sze[a] += sze[b];
        mx = max(sze[a],mx);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("closing.in","r",stdin);
    freopen("closing.out","w",stdout);

    cin >> n >> m;

    mx = 1;
    adj.assign(n+1,vi());
    daddy.assign(n+1,0);
    sze.assign(n+1,1);
    used.assign(n+1,false);
    vi queries;
    queries.reserve(n);

    init();

    vector<string> ans;

    while(m--){
        int a, b;
        cin >> a >> b;
        adj[a].eb(b);
        adj[b].eb(a);
    }

    while(n--){
        int a;
        cin >> a;
        queries.eb(a);
    }

    reverse(queries.begin(),queries.end());
    int cnt = 1;

    for (int i : queries){
        used[i] = true;
        for (int j : adj[i])
            if (used[j])
                uni(i,j);

        if (mx == cnt)
            ans.eb("YES\n");
        else
            ans.eb("NO\n");

        cnt++;
    }

    reverse(ans.begin(),ans.end());

    for (string i : ans)
        cout << i;
}