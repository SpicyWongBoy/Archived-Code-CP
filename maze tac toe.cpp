////
//// Created by Tony on 8/18/2021.
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
//typedef pair<int,int> pi;
//typedef vector<int> vi;
//
//vector<string> grid;
//int sum = 0;
//
//int dx[4] = {0,0,-1,1};
//int dy[4] = {3,-3,0,0};
//
//int dmoo[8] = {0,0,1,1,1,-1,-1,-1};
//int dpoo[8] = {1,-1,0,1,-1,0,1,-1};
//
//bool inbounds(pi a) {
//    return a.second < 4 && a.first >= 1 && a.second >= 1 && a.first < 4;
//};
//
//bool isWin(vector<string> board){
//    for (int i = 1; i < 4; i++){
//        for (int j = 1; j < 4; j++) {
//            if (board[i][j] == 'M') {
//                for (int k = 0; k < 8; k++) {
//                    pi O1 = {i+dmoo[k],j+dpoo[k]};
//                    pi O2 = {i+2*dmoo[k],j+2*dpoo[k]};
//                    if (inbounds(O1) && inbounds(O2) && board[O1.first][O1.second] == 'O' && board[O2.first][O2.second] == 'O')
//                        return true;
//                }
//            }
//        }
//    }
//    return false;
//};
//
//void floodfill() {
//
//}
//
//void bfs(vector<string> board, queue<pi> moves){
//
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int n;
//    cin >> n;
//
//    vector<string> board(4,string(4,'.'));
//    grid.assign(n,"");
//    pi start;
//    for (int i = 0; i < n; i++)cin >> grid[i];
//
//    for (int i = 0; i < n; i++) {for (int j = 0; j < 3*n; j++) {if (grid[i][j] == 'B') start = {i,j+1};}}
//
//    floodfill();
//    cout << sum << endl;
//
//
//}