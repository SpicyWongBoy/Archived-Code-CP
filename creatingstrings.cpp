//
// Created by Tony on 8/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;

    sort(n.begin(),n.end());

    vector<string> v;

    do {
        v.push_back(n);
    } while (next_permutation(n.begin(),n.end()));

    cout << v.size() << endl;
    for (string i : v)
        cout << i << endl;
}