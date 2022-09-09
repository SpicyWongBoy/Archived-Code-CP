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

    int calc[7];
    for (int &i : calc) cin >> i;

    ll apbpc = *max_element(calc,calc+7);

    sort(calc,calc+7);

    int a = calc[0];
    int b = calc[1];
    int c;
    for (int i = 2; i < 7; i++) {
        c = calc[i];
        if (a + b + c == apbpc)
            break;
        else if (a+b+c < apbpc)
            continue;
    }

    printf("%d %d %d",a,b,c);

}