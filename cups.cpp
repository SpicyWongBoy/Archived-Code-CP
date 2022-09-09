//
// Created by Tony on 7/23/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int c;
        cin >> c;
        double ans = 0;
        if (c == 1) {
            printf("1800\n");
            continue;
        }
        if (c % 2 == 1) {
            c/=2;
            ans += 1800.0/(c+1);
        }
        else
            c/=2;
        for (double j = 1; j <= c; j+=1)
            ans += 3600/j;

        printf("%.f\n",ans);
    }
}