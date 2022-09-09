//
// Created by Tony on 8/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int arr[101];

    memset(arr,0,sizeof arr);

    for (; c < d; c++)
        arr[c] = 1;
    for (; a < b; a++)
        arr[a] = 1;

    int ans = accumulate(arr,arr+101,0);


    cout << ans << endl;
}