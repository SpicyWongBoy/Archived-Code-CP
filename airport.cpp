//
// Created by Tony on 7/19/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool works (int times[], int n, int k, int mid) {
    int counter = 0;
    ll sum = 0;
    int begint = times[0];
    int endt = 0;
    for (int i = 1; i < n; i++) {
        endt = times[i];
        sum += endt-begint;
        if (sum >= mid)
        {
            counter++;
            sum = 0;
        }
        begint = endt;
        if (i == n-1)
            counter++;
    }
    return k >= counter;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int times[n];

    for (int i = 0; i < n; i++)
        cin >> times[i];

    sort(times, times+n);

    int low = 1;
    int high = 1000000000;
    while (low < high) {
        int mid = (low+high)/2;
        if (works(times,n,k,mid))
            high = mid;
        else
            low = mid+1;
    }

    cout << low-1 << "\n";


}