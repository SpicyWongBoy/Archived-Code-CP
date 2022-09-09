////
//// Created by Tony on 12/16/2021.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//#define f first
//#define s second
//#define eb emplace_back
//#define mp make_pair
//
//typedef long long ll;
//typedef pair<int, int> pi;
//typedef vector<int> vi;
//
//int BBQ (string a) {
//    int ans = 0;
//    for (int i = 0; i < a.length(); i++) {
//        ans += (a[i] - '0')*pow(2,a.length()-1-i);
//    }
//    return ans;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    freopen("input3a.txt","r",stdin);
////    freopen("","w",stdout);
//
//
//    string a;
//    vector<int> count(100,0);
//    vector<int> total(100,0);
//    while (cin>>a)
//    {
//        for (int i = 0; i < a.length() ; i++)
//            count[i] += (a[i] - '0');
//    }
//
//    string gr = "", er = "";
//    for (int i = 0; i < a.length(); i++) {
//        if (count[i] > 500)
//        {
//            gr = "0" + gr;
//            er = "1" + er;
//        }
//        else
//        {
//            gr = "1" + gr;
//            er = "0" + er;
//
//        }
//    }
//    cout << gr << endl << er << endl;
//    cout << BBQ(gr)*BBQ(er);
//}