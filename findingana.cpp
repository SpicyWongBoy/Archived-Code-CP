#include <string.h>
#include <iostream>

using namespace std;
int main() {
    string s;
    cin >> s;
    
    string ans = "";
    bool founda = false;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a')
            founda = true;
        if (founda)
            ans += s[i];
    }

    cout << ans << endl;
}