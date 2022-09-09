
#include <bits/stdc++.h>

using namespace std;

bool lr(char a, char b) { // left is 1, right is 0
    if (a == 'N' && b == 'W')
        return 1;
    else if (a == 'E' && b == 'N')
        return 1;
    else if (a == 'S' && b == 'E')
        return 1;
    else if (a == 'W' && b == 'S')
        return 1;
    else if (a == 'N' && b == 'E')
        return 0;
    else if (a == 'E' && b == 'S')
        return 0;
    else if (a == 'S' && b == 'W')
        return 0;
    else if (a == 'W' && b == 'N')
        return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int left = 0;
        int right = 0;
        string l;
        cin >> l;

        for (int i = 0; i < l.length()-1; i++) {
            if (l[i] != l[i+1] && lr(l[i],l[i+1]))
                left++;
            else if (l[i] != l[i+1])
                right++;
        }

        if (left > right)
            cout << "CCW" << endl;
        else
            cout << "CW" << endl;
    }

    return 0;

}