//
// Created by Tony on 1/23/2022.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        double n, s;
        cin >> n >> s;
        if (n == 1)
            printf("Order #%d: %.03f\n",i+1,s*sqrt(3)/2.0 * s);
        else
            printf("Order #%d: %.03f\n",i+1,s*sqrt(3)/2.0 * (n+1)/2 * s);
    }


}