//
// Created by Tony on 12/4/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

double dist(pair<double,double> a, pair<double,double> b) {
    return sqrt((a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);
    int p;
    cin >> p;
    while (p--) {
        int b;
        cin >> b;
        vector<pair<double,double>> xyb;
        vector<pair<double,double>> xybn;
        vector<double> ans;
        for (int i = 0; i < b; i++) {
            double x, y;
            cin >> x >> y;
            xyb.push_back({x,y});
        }
        for (int j = 0; j < b; j++) {
            double x, y;
            cin >> x >> y;
            xybn.push_back({x,y});
        }

        sort(xyb.begin(),xyb.end());
        do {
            double build = 0;
            for (int i = 0; i < b; i++)
                build += dist(xyb[i],xybn[i]);
            ans.push_back(build);
        } while (next_permutation(xyb.begin(),xyb.end()));
        cout << *min_element(ans.begin(),ans.end()) << endl;
    }

}