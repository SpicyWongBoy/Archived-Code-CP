#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct coor {
    ll x;
    ll y;
};

ll d(coor v1, coor v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

ll m(coor v) {
    return sqrt(pow(v.x, 2) + pow(v.y, 2));
}
ll c(coor v1, coor v2) {
    return v1.y*v2.x - v1.x*v2.y;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio();

    int nights;
    cin >> nights;
    while (nights--) {

        vector<ll> seeable;
        ll loseable;
        coor chair;
        cin >> loseable >> chair.x >> chair.y;

        double racks;
        vector<coor> positions;
        cin >> racks;

        for (int i = 0; i < racks; i++) {
            coor temp;
            cin >> temp.x >> temp.y;
            positions.push_back(temp);
        }


        //solving the problem
        for (int i = 0; i < racks; i++) {
            ll count = 0;
            //iterating through the points to check if angles from that point work
            coor vector1 = {(positions[i].x - chair.x), (positions[i].y - chair.y)};
            for (int j = 0; j < racks; j++) {

                coor vector2 = {positions[j].x - chair.x, positions[j].y - chair.y};

                if (d(vector1,vector2) >= 0 && c(vector1,vector2) >= 0)
                    count++;
            }
            seeable.push_back(count);
        }

        //checking maximum of servers that are visible
        int most_visible = *max_element(seeable.begin(), seeable.end());
        if (most_visible >= racks-loseable)
            cout << 0 << endl;
        else
         cout << (racks - loseable) - most_visible << endl;

    }

}