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
//struct point {
//    int x, y;
//};
//
//int dx[4] = {0, 0, 1, -1};
//int dy[4] = {-1, 1, 0, 0};
//
//int R, C;
//vector<vector<bool>> used;
//vector<string> grid;
//ll ans = 1;
//ll counter = 1;
//
//bool inbounds(point a) {
//    return a.x >= 0 && a.x < R && a.y >= 0 && a.y < C;
//}
//
//void floodfill(point start) {
//    used[start.x][start.y] = true;
//    for (int i = 0; i < 4; i++) {
//        point next{start.x + dx[i], start.y + dy[i]};
//        if (inbounds(next) && !used[next.x][next.y] && grid[next.x][next.y] == '.') {
//            counter++;
//            used[next.x][next.y] = true;
//            floodfill(next);
//        }
//    }
//
//}
//
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    ifstream fin("room_large.in");
//
//    int T;
//    fin >> T;
//
//    for (int i = 0; i < T; i++) {
//        fin >> R >> C;
//        grid.assign(R, "");
//        used.assign(R, vector<bool>(C, false));
//        ans = 1;
//        counter = 1;
//
//        for (int j = 0; j < R; j++) {
//            fin >> grid[j];
//        }
//        if (grid[0][0] == '.') {
//            used.assign(R,vector<bool>(C,false));
//            floodfill(point{0,0});
//            ans = max(ans,counter);
//            counter = 1;
//        }
//
//
//        for (int j = 0; j < R; j++) {
//            for (int k = 0; k < C; k++) {
//                if (grid[j][k] == '#')
//                {
//                    grid[j][k] = '.';
//                    used.assign(R,vector<bool>(C,false));
//                    floodfill(point{j,k});
//                    ans = max(ans,counter);
//                    counter = 1;
//                    grid[j][k] = '#';
//                }
//            }
//        }
//
//        cout << ans << "\n";
//    }
//}