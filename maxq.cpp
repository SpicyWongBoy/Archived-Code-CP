//
// Created by Tony on 7/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int r;
    cin >> r;
    for (int i = 0; i < r; i++) {
        double a;
        cin >> a;
        double p0;
        cin >> p0;
        double c;
        cin >> c;

        double calc = sqrt(abs(2/(a*c)));
        printf("%.2f\n",calc);
    }
}