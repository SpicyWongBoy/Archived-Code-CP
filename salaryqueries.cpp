////
//// Created by Tony on 8/12/2021.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//typedef long long ll;
//
//// this is for range minimum query
//
//unordered_map<ll, ll> m;
//vector<ll> srt;
//inline namespace Input {
//    char buf[BUF_SZ];
//    int pos;
//    int len;
//
//    char next_char() {
//        if (pos == len) {
//            pos = 0;
//            len = (int) fread(buf, 1, BUF_SZ, stdin);
//            if (!len) {
//                return EOF;
//            }
//        }
//        return buf[pos++];
//    }
//
//    int read_int() {
//        int x;
//        char ch;
//        int sgn = 1;
//        while (!isdigit(ch = next_char())) {
//            if (ch == '-') {
//                sgn *= -1;
//            }
//        }
//        x = ch - '0';
//        while (isdigit(ch = next_char())) {
//            x = x * 10 + (ch - '0');
//        }
//        return x * sgn;
//    }
//} // namespace Input
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ll n, q;
//    cin >> n >> q;
//    ll srtlen = (ll) sqrt(1e9) + 1;
//
//    ll arr[n];
//    srt.assign(srtlen, 0);
//
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        srt[(arr[i] - 1) / srtlen] += 1;
//        m[arr[i]]++;
//    }
//
//    for (int i = 0; i < q; i++) {
//        char c;
//        int a, b;
//        a = read_int();
//        b = read_int();
//
//        if (c == '?')
//            cout << query(a - 1, b - 1, srtlen) << endl;
//        else {
//            srt[(arr[a - 1] - 1) / srtlen]--;
//            srt[b / srtlen]++;
//            m[arr[a - 1]]--;
//            m[b]++;
//        }
//
//    }
//
//
//}