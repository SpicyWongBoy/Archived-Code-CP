//
// Created by Tony on 8/17/2021.
//

#include <bits/stdc++.h>

using namespace std;

//#define endl "\n"

typedef long long ll;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int guess = 500;
    string s = "";
    cout << guess << endl;
    int a = 1;
    int b = 1000;
    while (s != "correct") {
        cin >> s;
        if (s == "correct")
        {
            return 0;
        }
        if (s == "lower") {
            b = guess-1;
            guess = (a+b)/2;
        }
        if (s == "higher") {
            a = guess+1;
            guess = (a+b)/2;
        }
        cout << guess << endl;
    }

}