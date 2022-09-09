////
//// Created by Tony on 8/17/2021.
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
//vector<ll> fw;
//vector<pair<int,int>> ic;
//
//void update(ll u, ll v) { for (; u < fw.size(); u += u & -u) fw[u] += v; }
//
//ll query(ll u) {
//    ll sum = 0;
//    for (; u; u -= u & -u) sum += fw[u];
//    return sum;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n, q;
//    cin >> n >> q;
//
//    cout << n << " " << q;
//
//    int a[n];
//    memset(a,  0, sizeof(a));
//
//    int index = 1;
//
//    for (int &i : a) {
//        int zax;
//        cin >> zax;
//        i = zax;
//        ic.push_back({zax,index});
//        index++;
//    }
//
//    for (int j = 1; j <= q; j++) {
//        char id;
//        cin >> id;
//        int a, b;
//        cin >> a >> b;
//        if (id == '!')
//        {
//            ic.push_back({b,index});
//            index++;
//        }
//        else
//        {
//            ic.push_back({a,index});
//
//        }
//
//    }
//
//}