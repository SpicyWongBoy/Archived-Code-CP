//
// Created by Tony on 7/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll N;
vector<ll> fibdp;
vector<vector<ll>> binodp2d;
vector<vector<ll>> LCSdp;
string s, t;

//fibbonacci memoization
ll fib(ll n) {
    if (fibdp[n] != -1)
        return fibdp[n];
    if (n < 2)
        return n;

    fibdp[n] = fib(n - 1) + fib(n - 2);
    return fibdp[n];
}

//LCS memoization
int LCSmemo(int x, int y) {
    if (x == 0 || y == 0)
        return 0;
    if (LCSdp[x][y] != -1)
        return LCSdp[x][y];

    if (s[x - 1] == t[y - 1])
        LCSdp[x][y] = LCSmemo(x - 1, y - 1);
    else
        LCSdp[x][y] = max(LCSmemo(x-1,y),LCSmemo(x,y-1));

    return LCSdp[x][y];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    fibdp.assign(N + 1, -1);

    cout << fib(N) << endl;

    binodp2d.assign(N + 1, vector<ll>(N + 1, 0));

    for (int i = 0; i < N + 1; i++) {
        binodp2d[i][0] = 1;
        binodp2d[i][i] = 1;
    }
    for (int i = 0; i < N + 1; i++) {
        for (int j = 1; j < i; j++) {
            binodp2d[i][j] = binodp2d[i - 1][j - 1] + binodp2d[i - 1][j];
        }
    }

    for (int i = 0; i < N + 1; i++) {
        for (int j = 0; j < N + 1; j++) {
            cout << binodp2d[i][j] << " ";
        }
        cout << "\n";
    }

    LCSdp.assign(N + 1, vector<ll>(N + 1, -1));

    t = "ACGGATACT";
    s = "CAGGTAATC";
    cout << LCSmemo(t.length(),s.length());


}

