//
// Created by Tony on 7/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long int lln;

struct stock {
    ll price;
    ll amount;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;

    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        vector<stock> v;
        ll ans = 0;

        for (int i = 0; i < N; i++) {
            string state;
            cin >> state;

            stock s;
            cin >> s.amount >> s.price;

            if (state == "BUY") {
                if (v.size() == 0)
                    v.push_back(s);
                else
                {
                    for (int q = 0; q < v.size(); q++) {
                        if (q == v.size()-1 && v[q].price > s.price) {
                            v.push_back(s);
                            break;
                        }
                        if (v[q].price <= s.price) {
                            v.insert(v.begin()+q, s);
                            break;
                        }

                    }
                }
            }
            if (state == "SELL") {
                while (s.amount > 0) {
                    if (v[0].amount > s.amount) {
                        ans += (s.price - v[0].price) * s.amount;
                        v[0].amount -= s.amount;
                        s.amount = 0;
                    }
                    else {
                        ans += (s.price - v[0].price) * v[0].amount;
                        s.amount -= v[0].amount;
                        v.erase(v.begin());
                    }
                }
            }
        }

        cout << ans << endl;

    }


}