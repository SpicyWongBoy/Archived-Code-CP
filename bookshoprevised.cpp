//
// Created by Tony on 8/19/2021.
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

    int n, x;
    cin >> n >> x;
    vi price(n+1), pages(n+1);

    for (int i = 1; i <= n; i++) cin >> price[i];
    for (int i = 1; i <= n; i++) cin >> pages[i];

    int dp[n+1][x+1];

    for (int i = 0; i <= n; i++) {
        for (int m = 0; m <= x; m++) {
            if (m == 0 || i == 0)
                dp[i][m] = 0;
            else
            {
				//option 1 is not taking the book
                int op1 = dp[i-1][m];
				//option 2 first checks if it is even possible to take the book, where at that point decide the option is unviable (0), otherwise take the book (pages[i])
                int op2 = (m - price[i] < 0) ? 0 : pages[i]+dp[i-1][m-price[i]];
                dp[i][m] = max(op1,op2);
            }

        }
    }
    cout << dp[n][x];

}