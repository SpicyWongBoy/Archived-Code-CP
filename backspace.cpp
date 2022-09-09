//
// Created by Tony on 8/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define r first
#define c second
#define pb push_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    string s;
    cin >> s;

    vector<char> booba;

    for (char &a : s)
        if (!booba.empty() && a == '<')
            booba.pop_back();
        else
            booba.emplace_back(a);

    for (char b : booba)
        cout << b;


}