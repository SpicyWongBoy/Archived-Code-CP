//
// Created by Tony on 8/10/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int s1[n/2];
    int s2[n/2+1];
    int s3[n/2];
    int s4[n/2];

    if (n%4 == 3) {
        cout << "YES" << endl;
        int index = 0;
        for (int i = 1; i <= n/2; i+=2) {
            s2[index] = i;
            index++;
        }
        for (int i = n/2+1; i <= n; i+=2) {
            s2[index] = i;
            index++;
        }
        index = 0;
        for (int i = 2; i <= n/2; i+=2) {
            s1[index] = i;
            index++;
        }
        for (int i = n/2+2; i <= n; i+=2) {
            s1[index] = i;
            index++;
        }

        cout << n/2 << endl;
        for (int j = 0; j < n/2; j++) {
            cout << s1[j] << " ";
        }
        cout << endl;
        cout << n/2+1 << endl;
        for (int j = 0; j < n/2+1; j++) {
            cout << s2[j] << " ";
        }
        cout << endl;
    }
    else if (n % 4 == 0) {
        cout << "YES" << endl;
        int index = 0;
        for (int i = 1; i <= n/2; i+=2) {
            s3[index] = i;
            index++;
        }
        for (int i = n/2+2; i <= n; i+=2) {
            s3[index] = i;
            index++;
        }
        index = 0;
        for (int i = 2; i <= n/2; i+=2) {
            s4[index] = i;
            index++;
        }
        for (int i = n/2+1; i <= n; i+=2) {
            s4[index] = i;
            index++;
        }

        cout << n/2 << endl;
        for (int j = 0; j < n/2; j++) {
            cout << s3[j] << " ";
        }
        cout << endl;
        cout << n/2 << endl;
        for (int j = 0; j < n/2; j++) {
            cout << s4[j] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}