////
//// Created by Tony on 7/16/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//struct point {
//    int x;
//    int y;
//};
//
//vector<int> steps;
//int counter = 0;
//
//void permGen(int perm[], bool used[], int loc, int S, vector<point> v, int N, int M) {
//    if (loc == S) {
//        steps.push_back(0);
//        point cur;
//        cur.x = 0;
//        cur.y = 0;
//        for (int i = 0; i < S; i++) {
//            steps[counter] += abs(v[perm[i]].x - cur.x) + abs(v[perm[i]].y - cur.y);
//            cur.x = v[perm[i]].x;
//            cur.y = v[perm[i]].y;
//        }
//
//        steps[counter] += abs((N - 1) - cur.x) + abs((M - 1) - cur.y);
//
//        counter++;
//        return;
//    }
//
//    for (int i = 0; i < S; i++) {
//        if (!used[i]) {
//            used[i] = true;
//            perm[loc] = i;
//            permGen(perm, used, loc + 1, S, v, N, M);
//            used[i] = false;
//        }
//    }
//
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int T;
//    cin >> T;
//
//    for (int i = 0; i < T; i++) {
//        int N, M;
//        cin >> N >> M;
//        string lines[N];
//        vector<point> v;
//
//        for (int j = 0; j < N; j++) {
//            string a;
//            cin >> a;
//            lines[j] = a;
//        }
//
//        for (int j = 0; j < N; j++) {
//            for (int k = 0; k < M; k++) {
//                if (lines[j][k] != '.') {
//                    point b;
//                    b.x = j;
//                    b.y = k;
//                    v.push_back(b);
//                }
//            }
//        }
//
//        int S = v.sze();
//        int perm[S];
//        bool used[S];
//        permGen(perm, used, 0, S, v, N, M);
//        cout << *min_element(steps.begin(), steps.end()) << "\n";
//        steps.clear();
//        counter = 0;
//
//    }
//
//}