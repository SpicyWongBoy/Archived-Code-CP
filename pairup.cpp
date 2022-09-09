////
//// Created by Tony on 7/15/2021.
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
////    ifstream fin("pairup.in");
////    ofstream fout("pairup.out");
//
//    int N;
//    cin >> N;
//    vector<pair<int, int>> cows;
//    for (int i = 0; i<N;i++) {
//        int amount, milk;
//        cin >> amount >> milk;
//        cows.push_back(make_pair(milk, amount));
//    }
//
//    sort(cows.begin(),cows.end());
//
//    int m = 0;
//
//    int i = 0;
//    int j = N-1;
//    while (i <= j){
//
//        m = max(cows[i].first+cows[j].first,m);
//        int minus = min(cows[i].second,cows[j].second);
//        if (i == j) minus/=2;
//        cows[i].second -= minus;
//        cows[j].second -= minus;
//
//        if (cows[i].second == 0) i++;
//        if (cows[j].second == 0) j--;
//
////        if (cows.size() == 1)
////            cows.front().second -= minus;
////            if (cows.front().second == 0)
////                cows.erase(cows.begin());
////        else {
////            cows.front().second -= minus;
////            cows.back().second -= minus;
////            if (cows.back().second == 0)
////                cows.erase(cows.begin()+cows.size());
////            if (cows.front().second == 0)
////                cows.erase(cows.begin());
////        }
//
//    }
//
//    cout << m << "\n";
//
//}