//
// Created by Tony on 1/17/2022.
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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("speeding.in","r",stdin);
//    freopen("speeding.out","w",stdout);

    int N,M;
    cin >> N >> M;

    ll ans = 0;

    vector<ll> road(100,0);
    vector<ll> speed(100,0);
    int ax = 0, bx = 0;
    for (int i = 0; i < 100;) {
        int a,  b;
        cin >> a >> b;
        bx += a;
        while (i < bx) {
            road[i] = b;
            i++;
        }
    }
    for (int i = 0; i < 100;) {
        int a,  b;
        cin >> a >> b;
        ax += a;
        while (i < ax) {
            speed[i] = b;
            i++;
        }
    }

    for (int i = 0; i < 100; i++)
        ans = max(ans,speed[i] - road[i]);

    cout << ans << endl;

}