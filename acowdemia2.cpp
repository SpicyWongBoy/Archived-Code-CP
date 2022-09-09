//
// Created by Tony on 8/18/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k, n;
    cin >> k >> n;

    unordered_map<string,int> m;
    vector<string> ans(n,string(n,'?'));
    vector<string> names;

    for (int i = 0; i < n; i++)
    {
    string s;
    cin >> s;
    m[s] = i;
    ans[i][i] = 'B';
    }

    for (int i = 0; i < k; i++) {
        names.clear();

        for (int j = 0; j < n; j++) {
            string a;
            cin >> a;
            names.push_back(a);
        }

        for (int ii = 0; ii < n; ii++) {
            bool firstComp = false;
            for (int jj = ii+1; jj < n;jj++){
                if (names[jj] < names[jj-1])
                    firstComp = true;
                if (firstComp) {
                    ans[m[names[ii]]][m[names[jj]]] = '0';
                    ans[m[names[jj]]][m[names[ii]]] = '1';
                }
            }
        }
    }

    for (string i : ans)
        cout << i << endl;


}