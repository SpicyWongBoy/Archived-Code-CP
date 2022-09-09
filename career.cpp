//
// Created by Tony on 7/14/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;

    for (int i = 0; i < c; i++) {
        int klow, khigh, alow, ahigh, j;
        cin >> klow >> khigh >> alow >> ahigh >> j;
        int counter = 0;
        for (int k = 0; k < j; k++) {
            int a, b;
            cin >> a >> b;
            if (a <= khigh && a >= klow && b >= alow && b <= ahigh)
                counter++;
        }

        cout << counter << "\n";

    }
}