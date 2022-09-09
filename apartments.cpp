//
// Created by Tony on 8/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> ppl(n);
    vector<ll> apts(m);

    for (int i = 0; i < n; i++)
        cin >> ppl[i];
    for (int i = 0; i < m; i++)
        cin >> apts[i];

    sort(ppl.begin(), ppl.end());
    sort(apts.begin(), apts.end());

    ll count = 0;

    for (int i = 0, j = 0; i < m && j < n;) {
            if (apts[i] > ppl[j] + k) {
                j++;
            }
            else if (apts[i] < ppl[j]-k)
                i++;
            else if (abs(apts[i] - ppl[j]) <= k) {
                count++;
                i++;
                j++;
            }
            else
                j++;
    }

    cout << count << endl;

}