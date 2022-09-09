//
// Created by Tony on 8/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    ll arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    ll sum = 0;
    ll counter = 0;
    ll child = 0;

    sort(arr, arr + n);

//    for (int i : arr)
//        cout << i << " ";
//    cout << endl;

    for (int i = 0, j = n - 1; i <= j;) {
        while (x - sum - arr[j] >= 0 && child < 2) {
            sum += arr[j];
            j--;
            child++;
        }
        while (x - sum - arr[i] >= 0 && child < 2) {
            sum += arr[i];
            i++;
            child++;
        }
        if (child == 2 || (x - sum - arr[i] < 0 && x - sum - arr[j] < 0)) {
            sum = 0;
            counter++;
            child = 0;
        }
    }
    if (sum > 0)
        counter++;

    cout << counter << endl;

}