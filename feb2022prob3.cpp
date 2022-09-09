//
// Created by Tony on 2/26/2022.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<string> sides(4,"");

    vector<string> perm;
    for (int i = 0; i < 4; i++) {
        cin >> sides[i];
        sides[i] += " ";
    }
    for (int i = 0; i < 4; i++) sort(sides[i].begin(),sides[i].end());

    for (int a = 0; a < 7; a++)
    {
        for (int b = 0; b < 7; b++)
        {
            for (int c = 0; c < 7; c++)
            {
                for (int d = 0; d < 7; d++)
                {
                    string build = "";
                    build += sides[0][a];
                    build += sides[1][b];
                    build += sides[2][c];
                    build += sides[3][d];
                    perm.push_back(build);
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        string check;
        bool b = false;
        cin >> check;
        sort(check.begin(),check.end());
        for (string a : perm) {
            sort(a.begin(),a.end());
            a.erase(remove(a.begin(),a.end(), ' '),a.end());
            if (check == a) {
                cout << "YES" << endl;
                b = true;
                break;
            }
        }
        if (!b)
            cout << "NO" << endl;
    }

//    freopen("","r",stdin);
//    freopen("","w",stdout);

}