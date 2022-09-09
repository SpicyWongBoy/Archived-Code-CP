//
// Created by Tony on 7/12/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct loc {
    string name;
    double location;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int c;
    cin >> c;


    for (int i = 0; i < c; i++) {
        int n;
        cin >> n;

        char d;
        cin >> d;

        loc arr[n];

        for (int j = 0; j < n; j++) {
            loc a;
            cin >> a.name >> a.location;
            arr[j] = a;
        }

        if (d == 'E') {
            sort(arr, arr + n, [](loc a, loc b) {
                if (a.location == b.location)
                    return a.name < b.name;
                return a.location > b.location;
            });
        } else
        {
            sort(arr, arr + n, [](loc a, loc b) {
                if (a.location == b.location)
                    return a.name < b.name;
                return a.location < b.location;
            });
        }

        for (loc a : arr)
            cout << a.name << endl;

    }

}