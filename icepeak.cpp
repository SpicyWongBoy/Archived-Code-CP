////
//// Created by Tony on 8/7/2021.
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
//int R, C;
//vector <string> grid;
//vector <vector<int>> dist;
//vector <vector<bool>> used;
//
//struct point {
//    int x;
//    int y;
//};
//
//point S, E;
//
//int dx[4] = {0, 0, -1, 1};
//int dy[4] = {-1, 1, 0, 0};
//// go left
//// go right
//// go up
//// go down
//bool inbounds(point a) {
//    return a.x >= 0 && a.x < R && a.y >= 0 && a.y < C;
//}
//
//bool onEdge(point a, int condition) {
//    if (condition == 0) {
//        return a.y == 0;
//    }
//    if (condition == 1) {
//        return a.y == C-1;
//    }
//    if (condition == 2) {
//        return a.x == 0;
//    }
//    if (condition == 3) {
//        return a.x == R-1;
//    }
//}
//
//void bfs(point start);
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int T;
//    cin >> T;
//
//    for (int i = 0; i < T; i++) {
//        cin >> R >> C;
//        dist.assign(R, vector<int>(C, -1));
//        used.assign(R, vector<bool>(C, false));
//        grid.assign(R, "");
//
//        for (int j = 0; j < R; j++) cin >> grid[j];
//
//        for (int j = 0; j < R; j++) {
//            for (int k = 0; k < C; k++) {
//                if (grid[j][k] == 'S') S = point{j, k};
//                if (grid[j][k] == 'E') E = point{j, k};
//            }
//        }
//
//        //everything before this is just reading in the input
//        bfs(S);
//
////        for (vector<int> i : dist) {
////            for (int j : i)
////                cout << j << " ";
////            cout << "\n";
////        }
//
//        cout << dist[E.x][E.y] << "\n";
//
//    }
//
//}
//
//void bfs(point start) {
//
//    //initial statements
//    queue<point> q;
//    used[start.x][start.y] = true;
//    dist[start.x][start.y] = 0;
//    q.push(start);
//    while (!q.empty()) {
//        //focus on our curr
//        point curr = q.front();
//
//        //end the BFS if we have found the end
//        if (curr.x == E.x && curr.y == E.y)
//            return;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            point next{curr.x, curr.y};
//            // only check the next (points) that works so we don't have any exceptions and only in a single direction
//            while (inbounds(next)) {
//                // if we hit a wall
//                // check if the empty space next to the wall
//                // is available (not yet used)
//                if (grid[next.x][next.y] == 'X') {
//                    if (!used[next.x-dx[i]][next.y-dy[i]]) {
//                        //go back onto the available space
//                        next.x -= dx[i];
//                        next.y -= dy[i];
//                        dist[next.x][next.y] = dist[curr.x][curr.y] + 1;
//                        used[next.x][next.y] = true;
//                        q.push(next);
//                    }
//                    break;
//                }
//
//                //now check if we hit the limits of the array AND that the value at that point is not 'X'
//                if (!used[next.x][next.y] && onEdge(next, i) && grid[next.x][next.y] != 'X')
//                {
//                    //default visiting :)
//                    dist[next.x][next.y] = dist[curr.x][curr.y] + 1;
//                    used[next.x][next.y] = true;
//                    q.push(next);
//                    break;
//                }
//
//                //go forward in a single direction
//                next.x += dx[i];
//                next.y += dy[i];
//            }
//        }
//
//    }
//
//}
//
