////
//// Created by Tony on 7/20/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct item {
//    int d;
//    int v;
//    int w;
//
//    bool Compare(item a, item b) {
//        return a.d+a.w < b.d+b.w;
//    }
//};
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//
//        int k;
//        cin >> k;
//        item a;
//        int limit = 0;
//
//        priority_queue<item, vector<item>> q;
//
//        for (int j = 0; j < k; j++) {
//            cin >> a.d >> a.v >> a.w;
//            q.push(a);
//            limit = max(limit,a.d);
//        }
//
//
//        vector<ll> dp(limit+1, 0);
//
//        while (!q.empty()) {
//            item f = q.top();
//            q.pop();
//            dp[f.d] += f.v;
//            for (int j = 0; j < )
//        }
//    }
//
//    }