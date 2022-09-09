#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

typedef long long ll;

ll sum(ll n) {
    ll digSum = 0;
    while (n > 0) {
        digSum += n % 10;
        n /= 10;
    }
    return digSum;
}

void solve() {
    ll n;
    cin >> n;

    while (__gcd(n,sum(n)) <= 1) {
        n++;
    }

    cout << n << endl;

}


int main() {
    cin.tie();
    ios_base::sync_with_stdio();

    int n;
    cin >> n;
    while (n--) {
        solve();
    }
}