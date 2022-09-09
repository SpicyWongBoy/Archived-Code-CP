////
//// Created by Tony on 8/22/2021.
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
//vi daddy;
//int comp;
//vector<pi> useless;
//
//void init(int N) {
//    for (int i = 1; i <= N; i++)
//        daddy[i] = i;
//}
//
//int find(int x) {
//    return (x == daddy[x]) ? x : daddy[x] = find(daddy[x]);
//}
//
//void uni(int a, int b) {
//    int c = find(a);
//    int d = find(b);
//    if (c != d) {
//        daddy[c] = d;
//        comp--;
//    }
//    else
//        useless.eb(mp(a, b));
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    //    freopen("","r",stdin);
//    //    freopen("","w",stdout);
//
//    int N, M;
//    cin >> N >> M;
//    comp = N;
//    daddy.assign(N + 1, 0);
//
//    init(N);
//
//    while (M--) {
//        int a, b;
//        cin >> a >> b;
//        uni(a, b);
//    }
//
//    if (comp - 1 > useless.sze()) {
//        cout << -1;
//        return 0;
//    }
//
//    cout << comp - 1 << endl;
//
//    int fst = find(1);
//    for (int i = 2, j = 0; i <= N; i++) {
//        int cur = find(daddy[i]);
//        if (cur != fst) {
//            daddy[cur] = fst;
//            cout << useless[j].f << " " << useless[j].s << " " << fst << " " << cur << '\n';
//            j++;
//        }
//    }
//    return 0;
//}