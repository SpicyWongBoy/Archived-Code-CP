//
// Created by Tony on 1/23/2022.
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

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int d;
    cin >> d;
    for (int i = 0; i < d; i++) {
        int p;
        cin >> p;
        vector<int> ps(p, 0);
        for (int j = 0; j < p; j++)
            cin >> ps[j];

        unordered_set<int> s;
        for (int j = 0; j < p; j++)
            s.insert(ps[j]);
        ps.clear();
        for (auto j: s)
            ps.eb(j);
        sort(ps.begin(), ps.end());

        string build = "";

        for (int j = 0, k = 0, temp = 0; j < ps.size() && k < ps.size();) {
            while (ps[k + 1] - ps[temp] == 1) {
                k++;
                temp++;
            }
            if (k != j)
                build += to_string(ps[j]) + "-" + to_string(ps[k]) + ", ";
            else
                build += to_string(ps[j]) + ", ";
            j = k+1;
            k = j;
            temp = k;
        }
        build.pop_back();
        build.pop_back();
        cout << "Day #" << i+1 << ": " << build << endl << endl;

    }

}