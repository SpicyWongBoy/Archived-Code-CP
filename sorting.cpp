//
// Created by Tony on 7/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C, N;
    cin >> C;

    for (int i = 1; i <= C; i++) {
        vector<pair<string,string>> v;

        cin >> N;

        cout << "Class #" << i << " ordering\n";

        for (int j = 0; j < N; j++) {
            string line;
            cin >> line;
            string savel = line;
            sort(line.begin(),line.end());
            while (line.length()<=21)
                line += "a";
            v.push_back(make_pair(savel,line));
        }

        sort (v.begin(),v.end(), [](pair<string,string> a, pair<string,string> b) {
            return b.second > a.second;
        });

        for (pair<string,string> ans : v)
            cout << ans.first << "\n";
        cout << "\n";
    }

}