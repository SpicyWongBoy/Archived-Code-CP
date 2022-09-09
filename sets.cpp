////
//// Created by Tony on 7/13/2021.
////
//
//
//#include <bits/stdc++.h>
//#include <unordered_set>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    unordered_set<int> s1, s2, s3, s4;
//
//    s1.insert(1);
//    s1.insert(2);
//    s1.insert(4);
//    s1.insert(3);
//
//    s2.insert(4);
//    s2.insert(1);
//
//    s1.erase(3);
//
//    for (int i : s1)
//        cout << i << " " ;
//    cout << "\n";
//    for (int a : s2)
//        cout << a << " ";
//    cout << "\n";
//
//    set_difference(s1.begin(), s1.end(),s2.begin(), s2.end(), inserter(s3,s3.begin()));
//
//    for (int r : s3)
//        cout << r << " ";
//}