//
// Created by Tony on 6/21/2022.
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

    int count = 0;

    for (int i = 0 ; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 2 || i == 3 || i == 5 || j == 2 || j == 3 || j == 5)
                count++;
        }
    }
    cout << count;

//    freopen("","r",stdin);
//    freopen("","w",stdout);

}