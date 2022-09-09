//
// Created by Tony on 8/19/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

ll cp(ll x1, ll y1, ll x2, ll y2) {
    return y1*x2 - x1*y2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        ll v1x = x2-x1;
        ll v1y = y2-y1;

        ll v2x = x3-x1;
        ll v2y = y3-y1;

        if (cp(v1x,v1y,v2x,v2y) == 0)
            cout << "TOUCH";
        else if (cp(v1x,v1y,v2x,v2y) < 0)
            cout << "LEFT";
        else if (cp(v1x,v1y,v2x,v2y) > 0)
            cout << "RIGHT";
        cout << endl;

    }
}