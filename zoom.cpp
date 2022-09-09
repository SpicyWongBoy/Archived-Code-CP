//
// Created by Tony on 7/1/2021.
//

#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

typedef long long ll;

struct fr {
    string l;
    int f;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c, n;

    cin >> n;

    for (int i = 0; i < n; i++) {

        cin >> c;

        vector<fr> v;

        for (int j = 0; j < c; j++) {

            string s;
            cin >> s;

            v.push_back(fr{s, 0});
        }

        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {

                if (k == j) continue;

                if (v[j].l == v[k].l) {
                    v[j].f++;
                    v.erase(v.begin() + k);
                    k--;
                }
            }
        }

        sort(v.begin(), v.end(), [](fr a, fr b) {
            if (a.f == b.f)
                return b.l > a.l;
            else
                return (a.f > b.f);
        });

        for (fr b : v) {
            cout << b.l << endl;
        }

    }

}
