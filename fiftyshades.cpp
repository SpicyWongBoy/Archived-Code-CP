#include <iostream>
#include <algorithm>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        if (s.find("pink") != string::npos || s.find("rose") != string::npos)
            ans++;
    }
    ans == 0 ? cout << "I must watch Star Wars with my daughter" : cout << ans;
    cout << endl;
}