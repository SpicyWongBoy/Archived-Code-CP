//
// Created by Tony on 12/4/2021.
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

#define DIM 4 // default to 2. Set value according to problem.
#define MOD 1000000007

struct matrix{
    ll a[DIM][DIM];

    // constructor. Make an empty array.
    matrix() {
        memset(a, 0, sizeof(ll) * DIM * DIM);
    }

    // constant matrix (M). Set value according to problem.

    matrix operator* (matrix b) {
        matrix c;
        for (int k = 0; k < DIM; ++ k) {
            for (int i = 0; i < DIM; ++i) {
                for (int j = 0; j < DIM; ++j) {
                    c.a[i][j] = (c.a[i][j] + a[i][k] * b.a[k][j]) % MOD;
                }
            }
        }
        return c;
    }
};

matrix pow_matrix(matrix a, ll n) {
    if (n == 1) return a;

    matrix b = pow_matrix(a, n / 2);
    b = b * b;
    if (n & 1) b = b * a;

    return b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int c;
    cin >> c;
    for (int i = 0; i < c; i++) {
        vector<vector<ll>> genome;
        genome.assign(6, vector<ll>(4, 0));
        matrix exp;
        string A, C, T, G;
        cin >> A >> C >> T >> G;
        string l;
        cin >> l;

        for (int i = 0; i < A.length(); i++) {
            if (A[i] == 'A')
                genome[0][0]++;
            if (A[i] == 'C')
                genome[0][1]++;
            if (A[i] == 'T')
                genome[0][2]++;
            if (A[i] == 'G')
                genome[0][3]++;
        }
        for (int i = 0; i < C.length(); i++) {
            if (C[i] == 'A')
                genome[1][0]++;
            if (C[i] == 'C')
                genome[1][1]++;
            if (C[i] == 'T')
                genome[1][2]++;
            if (C[i] == 'G')
                genome[1][3]++;
        }
        for (int i = 0; i < T.length(); i++) {
            if (T[i] == 'A')
                genome[2][0]++;
            if (T[i] == 'C')
                genome[2][1]++;
            if (T[i] == 'T')
                genome[2][2]++;
            if (T[i] == 'G')
                genome[2][3]++;
        }
        for (int i = 0; i < G.length(); i++) {
            if (G[i] == 'A')
                genome[3][0]++;
            if (G[i] == 'C')
                genome[3][1]++;
            if (G[i] == 'T')
                genome[3][2]++;
            if (G[i] == 'G')
                genome[3][3]++;
        }
        for (int i = 0; i < l.length(); i++) {
            if (l[i] == 'A')
                genome[4][0]++;
            if (l[i] == 'C')
                genome[4][1]++;
            if (l[i] == 'T')
                genome[4][2]++;
            if (l[i] == 'G')
                genome[4][3]++;
        }

        ll years;
        cin >> years;

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                exp.a[i][j] = genome[i][j];

        exp = pow_matrix(exp,years);

        for (int i = 0; i < 4; i++)
            genome[5][i] = (exp.a[0][i]*genome[4][0] + exp.a[1][i]*genome[4][1] + exp.a[2][i]*genome[4][2] + exp.a[3][i]*genome[4][3]) % MOD;

        cout << "Genome #" << i+1 << ": ";
        for (int i = 0; i < 4; i++)
            cout << genome[5][i] << " ";
        cout << endl;
    }
}