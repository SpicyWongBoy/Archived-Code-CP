////
//// Created by Tony on 7/12/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//typedef long long int lln;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, M;
//
//    cin >> N >> M;
//
//    string pt, key;
//
//    cin >> key >> pt;
//
//    int shift = abs((key.back() - pt.back()));
//    cout << shift << "\n";
//
//    for (int i = 0; i < pt.length(); i++) {
//        pt[i] = ((pt[i]+shift-'a')%26)+'a';
//        cout << pt[i];
//    }
//
//
//}