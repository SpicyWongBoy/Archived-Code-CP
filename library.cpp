//
// Created by Tony on 7/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string alphai = "abcdefghijklmnopqrstuvwxyz";

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;

    for (int i = 0 ; i < c; i++) {
        int throwaway;
        cin >> throwaway;
        string line;
        cin >> line;
        int letters[26] = {0};
        ll ans = 0;

        //create prefix array
        for (char a : line) {
            letters[a-'a']++;
            for (int j = a-'a'+1; j < 26; j++) {
                ans += letters[j];
            }
        }

        cout << ans << "\n";

    }

}