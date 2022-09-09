
//created by tony on 7/23/2021.

#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll ans = 0;
        int l;
        cin >> l;
        string line;
        cin >> line;

        ll amta = 0;
        ll amtc = 0;
        char saved = line[0];
        while (!line.empty()) {
            if (saved == 'c' && line[0] == 'a')
            {
                ans += amta*amtc;
                amtc = 0;
            }
            if (line[0] == 'a')
                amta++;
            else
                amtc++;
            saved = line[0];
            line = line.substr(1);
        }
        ans += amta*amtc;
        cout << ans << "\n";
    }

    system("PAUSE");
    return 0;
}