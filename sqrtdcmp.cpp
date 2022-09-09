//
// Created by Tony on 8/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

// sqrt decomp

vector<int> arr;
vector<int> srt;
int srtlen;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    srtlen = (int) sqrt(n) + 1;

    srt.assign(srtlen, 1e9);
    arr.assign(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        srt[i / srtlen] = min(srt[i / srtlen], arr[i]);


    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        int myn = 1e9;
        for (; a <= b;) {
            if (a % srtlen == 0 && a + srtlen - 1 <= b) {
                myn = min(myn, srt[a / srtlen]);
                a += srtlen;
            } else
                myn = min(myn, arr[a++]);
        }
        cout << myn << endl;
    }


}