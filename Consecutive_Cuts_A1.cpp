//
// Created by Tony on 9/10/2022.
//

#include <bits/stdc++.h>

using namespace std;

int main(){

    freopen("consecutive_cuts_chapter_1_input.txt","r",stdin);
    freopen("consecutive_cuts_chapter_1_output.txt","w",stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int c, k;
        cin >> c >> k;

        vector<int> cards(c,0);
        vector<int> lcirc(c,0);
        for (int j = 0; j < c; j++) cin >> cards[j];
        for (int j = 0; j < c; j++) cin >> lcirc[j];

        int si = 0;
        for (int k = 0; k < c; k++)
            if (cards[k] == lcirc[si]){
                si = k;
                break;
            }
        int id = si;

        bool works = true;
        for (int k = 0; k < c; k++) {
            if (k != 0 && id == si)
                break;
            if (id == c)
                id = 0;
            if (cards[id] != lcirc[k])
                works = false;
            id++;
        }
        cout << "Case #" << i << ": ";
        // si is the max # of items I can cut to get a perfect
        if (!works || (si == 1 && k == 2 && c == 2) || (k == 0 && si != 0) || (si == 0 && k == 1))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
//        cout << c  << " " << k << endl;
//        for (int j : cards)
//            cout << j << " ";
//        cout<<endl;
//        for (int j : lcirc)
//            cout << j << " ";
//        cout<<endl;
    }
    return 0;
}
