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
//int swapsto(string a, string b) {
//    if (a == b)
//        return 0;
//
//    int count = 0;
//    for (int i = 0; i < 4; i++) {
//        int c = b.find(a[i]);
//        if (c > i) {
//            count += c - i;
//        }
//    }
//    cout << a <<" "<< b << " ";
//    cout << count << "\n";
//    return count;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int C;
//    cin >> C;
//    for (int i = 0; i < C; i++) {
//        string a, b;
//        cin >> a >> b;
//        vector<pair<string,int>> count;
//        int j = 0;
//        if (a == b) {
//            cout << 0 << "\n";
//            continue;
//        }
//
//        string olda = a;
//
//        do {
//            count.push_back(make_pair("",0));
//            for (int k = 0; k < 4; k++) {
//                count[j].second += min(abs(b[k] - a[k]),26-abs(b[k]-a[k]));
//            }
//            count[j].first = a;
//            j++;
//        } while (next_permutation(a.begin(),a.end()));
//
//        sort(count.begin(),count.end(),[](pair<string,int> a, pair<string,int> b) {return a.second < b.second;});
//
//        int mn = count[0].second;
//        int lowestswap = 1000;
//        for (int k = 0; k < count.sze(); k++) {
//            if (count[k].second == mn)
//                lowestswap = min(swapsto(count[k].first,olda),lowestswap);
//        }
//        cout << count[0].second << " " << count[0].first<<"\n";
//
//        cout << count[0].second+lowestswap << "\n";
//    }
//
//
//}
