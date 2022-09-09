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

//    freopen("blocks.in","r",stdin);
//    freopen("blocks.out","w",stdout);

    int n;
    cin >> n;

    vector<pair<string,string>> words(n);

    vector<int> ans(26,0);

    for (int i = 0; i < n; i++) {
        string a, b;
        cin >> a >> b;
        words[i] = {a,b};
    }

    for (int i = 0; i < n; i++) {
        vector<int> build1(26,0);
        vector<int> build2(26,0);
        string s1;
        s1 = words[i].first;
        string s2;
        s2 = words[i].second;

        for (auto j : s1)
            build1[j-'a']++;
        for (auto j : s2)
            build2[j-'a']++;

        for (int j = 0; j < 26; j++ ) {
        ans[j] += max(build1[j],build2[j]);
        }
    }


    for (int i = 0; i < 25; i++)
        cout << ans[i] << endl;
    cout << ans[25];

}