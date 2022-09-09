//
// Created by Tony on 7/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;

    for (int i = 0 ; i < c; i++) {

        int n;
        cin >> n;
        vector<int> v;


        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        int m = v[0]+v[n-1];

        for (int j = 0; j < n/2; j++) {
            m = min(v[j]+v[n-j-1],m);
        }
        cout << m << "\n";
    }
}