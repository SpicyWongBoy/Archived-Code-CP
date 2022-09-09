#include <bits/stdc++.h>
#include <ios>

using namespace std;

typedef long long ll;

vector<ll> dp;

vector<int> coin_values = {1, 5, 10, 25, 25};
vector<int> debug;
ll Z;

bool recur(vector<int> coins, ll P, int count) {
    ll A = 0;
    for (int i = 0; i < 4; i++) {
        A += (debug.at(i) - coins.at(i)) * coin_values.at(i);
    }


    if (dp.size() >= 1)
        return false;
    if (P < 0) {
        return false;
    }
    for (int i = 0; i < 4; i++) {
        cout << coins.at(i) << " ";
    }
    cout << Z-A << " "<<P;
    cout << endl;
    if (P == 0) {

        dp.push_back(count);
        return false;
    }
    for (int i = 0; i < 4; i++) {
        if (coins.at(i) > 0) {
            ll c = 1;
            if (P <= coin_values.at(i) * coins.at(i) && P > (coin_values.at(i + 1)) + coin_values.at(i)) {
                c = P / coin_values.at(i) - coin_values.at(i + 1) / coin_values.at(i);
            } else if (P >= coin_values.at(i) * coins.at(i) && coins.at(i) > coin_values.at(i + 1) / coin_values.at(i) ) {
                c = coins.at(i) - coin_values.at(i + 1) / coin_values.at(i);
            }
            coins.at(i) -= c;
            if (recur(coins, P - coin_values.at(i) * c, count + c)) {
                return true;
            }
        }
    }
    return false;
}


int mai4() {
    cin.tie(0);
    ios_base::sync_with_stdio();

    ll P;
    vector<int> N;

    cin >> P;

    for (int i = 0; i < 4; i++) {
        int a;
        cin >> a;
        N.push_back(a);
    }

    Z = P;
    debug = N;

    recur(N, P, 0);

    if (dp.empty()) {
        cout << "Impossible";
        return 0;
    } else {
        cout << dp.at(0);
    }


}
