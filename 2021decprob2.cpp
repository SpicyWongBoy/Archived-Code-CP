#include <bits/stdc++.h>

using namespace std;


vector<int> difference;

void massSub(int a, int b, int sub) {
    for (int i = a; i < b; i++)
        difference[i] -= sub;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ideal(n,0);
    vector<int> now(n,0);
    difference.assign(n,0);
    long long ans = 0;
    for (int i = 0; i < n; i++)
        cin >> ideal[i];
    for (int i = 0; i < n; i++)
        cin >> now[i];
    for (int i = 0; i < n; i++) {
        difference[i] = ideal[i] - now[i];
    }

    int mn = 1e9;
    for (int i = 0, j = 0;;) {
        while (i<n && difference[i] == 0){
            i++;
            j=i;
        }
        if (i == n)
            break;
        while (j<n && difference[j] > 0 && difference[i] > 0) {
            mn = min(mn, difference[j]);
            j++;
        }
        while (j<n && difference[j] < 0 && difference[i] < 0) {
            mn = max(-mn, difference[j]);
            j++;
        }
        j--;
        ans += abs(mn);
        massSub(i,j+1,mn);
        mn = 1e9;
        i=0;
        j=0;
    }
    cout << ans << endl;


}