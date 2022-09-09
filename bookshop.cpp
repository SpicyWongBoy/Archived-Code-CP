//
// Created by Tony on 8/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

struct book{
    int price;
    int pages;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    vector<book> bks(n, book{0,0});
    vector<int> dp(x+1,0);

    for (int i = 0; i < n; i++)
        cin >> bks[i].price;
    for (int i = 0; i < n; i++)
        cin >> bks[i].pages;

    for (book b : bks) {
        for (int i = x; i >= 0; i--) {
            if (i-b.price >= 0) {
                dp[i] = max(dp[i],dp[i-b.price]+b.pages);
            }
        }
    }

    cout << dp[x] <<endl;
}