//
// Created by Tony on 1/17/2022.
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int R, C, K;
    cin >> R >> C >> K;
    vector<vector<char>> g(R,vector<char>(C));
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> g[i][j];
        }
    }

        for (int i = 0; i < R; i++) {
            for (int k = 0; k < K; k++) {
                for (int j = 0; j < C; j++) {
                    for (int z = 0; z < K; z++) {
                        cout << g[i][j];
                    }
                }
                cout << endl;
            }
        }

}