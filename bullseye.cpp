//
// Created by Tony on 7/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct coor {
    double x;
    double y;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;

    cin >> T;

    for (int i = 0 ; i < T ; i++) {
        string colors;

        coor point;

        cin >> colors >> point.x >> point.y;

        int pyth = sqrt(pow(point.x,2) + pow(point.y,2));

        cout << colors[pyth%colors.length()] << endl;

    }
}