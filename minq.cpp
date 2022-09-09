////
//// Created by Tony on 7/21/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int C;
//    cin >> C;
//    for (int j = 0; j < C; j++) {
//        string s, t;
//
//        cin >> s >> t;
//        int Qs = 0, Qt = 0;
//
//        for (int i = 0; i < s.length(); i++) {
//            if (s[i] == 'Q')
//                Qs++;
//        }
//        for (int i = 0; i < t.length(); i++) {
//            if (t[i] == 'Q')
//                Qt++;
//        }
//
//        if (Qs > Qt)
//            cout << t << "\n";
//        else
//            cout << s << "\n";
//    }
//
//}