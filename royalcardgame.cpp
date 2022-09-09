//
// Created by Tony on 9/13/2021.
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

bool win(vi v1, vi v2) {
    int win = 0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while (!v2.empty()) {
        int curC = v2.back();
        v2.pop_back();
        int i = 0;
        for (int j = 2; j >= 0; j--) {
            if (v1[j] > curC)
                i = j;
        }
        win += v1[i] < curC;
        v1[i] = -1;
    }
    return win >= 2;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);

    vi v1(3,1e9);
    vi v2(3,1e9);
    while (cin >> v1[0] >> v1[1] >> v1[2] >> v2[0] >> v2[1]) {
        if (v1[0] == 0)
            break;
        unordered_map<int,int> m;
        m[v1[0]]++;
        m[v1[1]]++;
        m[v1[2]]++;
        m[v2[0]]++;
        m[v2[1]]++;
        bool c = false;
        for (int i = 1; i <= 52; i++) {
            v2[2] = i;
            if (win(v1,v2) && m[v2[2]] == 0){
                c = true;
                break;
            }
        }

        if (c)
            cout << v2[2] << endl;
        else
            cout << -1 << endl;
    }

}