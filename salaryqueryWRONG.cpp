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
//// sqrt decomp
//
//unordered_map<ll,ll> m;
//vector<ll> srt;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll n, q;
//    cin >> n >> q;
//    ll srtlen = (ll)sqrt(1e9)+1;
//
//    ll arr[n];
//    srt.assign(srtlen,0);
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        srt[(arr[i]-1)/srtlen] += 1;
//        m[arr[i]]++;
//    }
//
//    for (int i = 0; i < q; i++) {
//        char c;
//        ll a, b;
//        cin >> c >> a >> b;
//
//        if (c == '?')
//        {
//            a--;b--;
//            ll sum = 0;
//            for (;a <= b;) {
//                if (a%srtlen == 0 && a+srtlen-1 <= b) {
//                    sum += srt[a/srtlen];
//                    a += srtlen;
//                }
//                else
//                    sum += m[a++ + 1];
//            }
//            cout << sum << endl;
//        }
//        else
//        {
//            srt[(arr[a-1]-1)/srtlen]--;
//            srt[b/srtlen]++;
//            m[arr[a-1]]--;
//            m[b]++;
//        }
//
//    }
//
//
//}