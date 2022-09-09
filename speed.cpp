//
// Created by Tony on 7/19/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<pair<double,double>> sd;

double tyme(double c) {
    double ans = 0;
    for (int i = 0; i < sd.size();i++)
        ans += sd[i].first/(sd[i].second+c);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, target;
    cin >> n >> target;

    double high = 1001;
    double low = 1000;

    for (int i = 0; i < n; i++) {
        double a, b;
        cin >> a >> b;
        high += a;
        low = min(low,b);
        sd.push_back(make_pair(a,b));
    }
        low = -low;

    for (int i = 0; i < 155; i++) {
        double mid = (low+high)/2.0;
        double v = tyme(mid);
        if (v < target)
            high = mid;
        else
            low = mid;
    }

    printf("%.8f\n",high);

}