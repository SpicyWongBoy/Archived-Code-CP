////
//// Created by Tony on 8/12/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    string n;
//    cin >> n;
//    bool leeway = false;
//    int odds = 0;
//    string ans = "";
//
//    unordered_map<char, int> map;
//    if (n.length()%2 == 1)
//        leeway = true;
//
//    for (int i = 0; i < n.length(); i++)
//        map[n[i]]++;
//    for (int i = 0; i < 26; i++) {
//        if (map['A'+i] % 2 == 1)
//            odds++;
//    }
//    char savedindexodd;
//
//    if ((leeway && odds > 1) || (!leeway && odds > 0)) {
//        cout << "NO SOLUTION" << endl;
//        return 0;
//    }
//
//
//        for (int i = 0; i < 26; i++)
//        {
//            if (map['A'+i]%2==1) {savedindexodd = 'A'+i; continue;}
//            string zax(map['A'+i]/2,'A'+i);
//            ans += zax;
//        }
//        ans += string(map[savedindexodd],savedindexodd);
//        for (int i = 25; i >= 0; i--) {
//            if (map['A'+i]%2==1) continue;
//            string zax(map['A'+i]/2,'A'+i);
//            ans += zax;
//        }
//        cout << ans;
//}