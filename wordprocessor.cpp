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

    freopen("word.in","r",stdin);
    freopen("word.out","w",stdout);

    int N, K;
    cin >> N >> K;

    int curLen = 0;
    string build = "";
    while(N--) {
        string s;
        cin >> s;
        curLen += s.length();
        if (curLen > K) {
            build.pop_back();
            build += "\n" + s + " ";
            curLen = s.length();
        }
        else if (curLen <= K) {
            build += s + " ";
        }
    }

    build.pop_back();
    cout << build;
}