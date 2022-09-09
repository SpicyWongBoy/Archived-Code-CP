////
//// Created by Tony on 7/23/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct state{
//    string name;
//    int temp;
//
//};
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int T;
//    cin >> T;
//    for (int i = 0; i < T; i++) {
//        int n;
//        cin >> n;
//        vector<state> v;
//        for (int j = 0; j < n; j++) {
//            string name;
//            int temp;
//            cin >> name >> temp;
//            v.push_back(state{name,temp});
//        }
//        sort (v.begin(),v.end(), [](state a, state b) {
//            if (a.temp == b.temp)
//                return a.name < b.name;
//            else
//                return a.temp > b.temp;
//        });
//
//        for (state a : v)
//            cout << a.name << "\n";
//    }
//}