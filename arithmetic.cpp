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

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    int n;
    cin >> n;
    while (n--) {
        ll terms;
        ll sum;
        cin >> terms >> sum;
        if (terms % 2 == 1)
        {
            if (sum%terms != 0)
                cout << "IMPOSSIBLE" << endl;
            else
            {
                for (int i = 0; i < terms; i++) {
                    cout << (sum/terms) - (terms)/2 + i << " ";
                }
            }
            cout << endl;
        }
        else
        {
            if (2*sum%terms != 0)
                cout << "IMPOSSIBLE" << endl;
            else
            {
                int d = (sum - terms)/(terms/2);
                for (int i = 0; i < terms; i++) {
                    cout << 1-(d*(i - (terms/2))) << " ";
                }
            }
            cout << endl;
        }

    }

}