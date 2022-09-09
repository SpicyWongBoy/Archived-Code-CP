
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string l;
    cin >> l;
    long long ans = 0;
    vector<pair<int,int>> GH(n+1,{0,0});
    int G = 0;
    int H = 0;
    for (int i = 1; i <= n; i++) {
        if (l[i-1] == 'H')
            H++;
        else
            G++;
        GH[i] = {G,H};
    }

    for (int i = 0; i < n-2; i++) {
        for (int j = n; j > i+2; j--) {
            if (GH[j].first - GH[i].first == 1 || GH[j].second - GH[i].second == 1)
                ans++;
        }
    }


    cout << ans;
}