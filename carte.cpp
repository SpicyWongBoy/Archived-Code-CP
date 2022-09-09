//
// Created by Tony on 8/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int P = 13,K = 13,H = 13,T = 13;

    unordered_map<string,int> map;

    for (int i = 0; i < s.length()/3; i++) {
        string bui = "";
        for (int j = 0; j < 3; j++) {
            bui += s[i*3+j];
        }

        if (bui[0] == 'P')
            P--;
        if (bui[0] == 'K')
            K--;
        if (bui[0] == 'H')
            H--;
        if (bui[0] == 'T')
            T--;

        map[bui]+=1;
        if (map[bui] == 2)
        {
            cout << "GRESKA" << endl;
            return 0;
        }
    }

    printf("%d %d %d %d",P,K,H,T);

}