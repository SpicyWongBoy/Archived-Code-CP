////
//// Created by Tony on 10/23/2021.
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
//vector<vi> _game;
//vi totalGame(9,-1);
//
//void printBoard();
//
//bool inBounds(int a) {
//    return a < 9 && a >= 0;
//}
//
//int next1[3] = {3,1,4};
//int next2[3] = {6,2,8};
//
//void simulateMiniGame(int game,vi miniGame) {
//    for (int i = 0; i < 9; i++) {
//        if (miniGame[i] != -1) {
//            for (int j = 0; j < 3; j++) {
//                if (inBounds(next1[j]) && inBounds(next2[j]) && miniGame[i] == miniGame[next1[j]] &&
//                    miniGame[i] == miniGame[next2[j]]) {
//                    totalGame[game] = miniGame[i];
//                }
//            }
//        }
//    }
//}
//
//int simulateGame() {
//    for (int i = 0; i < 9; i++) {
//        if (totalGame[i] != -1) {
//            for (int j = 0; j < 3; j++) {
//                if (inBounds(next1[j]) && inBounds(next2[j]) && totalGame[i] == totalGame[next1[j]] &&
//                    totalGame[i] == totalGame[next2[j]]) {
//                    return totalGame[i];
//                }
//            }
//        }
//    }
//    return -1;
//}
//
//int bfs(int mGame, int mPlay) {
//    queue<pair<int, int>> q;
//    q.push({mGame, mPlay});
//    int start = 0;
//
//    while (q.size()) {
//        printBoard();
//        if (simulateGame() != -1) {
//            return simulateGame();
//        }
//        pair<int, int> curr = q.front();
//        q.pop();
//        _game[curr.first][curr.second] = start;
//        simulateMiniGame(curr.first,_game[curr.first]);
//        start++;
//        start %= 2;
//        for (int j = 0; j < 9; j++)
//            if (_game[curr.second][j] == -1)
//                q.push({curr.second, j});
//    }
//
//    return -1;
//}
//
//void printBoard() {
//    for (int i = 0; i < 9;) {
//        for (int j = 0; j < 9;) {
//            cout << _game[i][j] << " ";
//            if ((j+1)%3 == 0) {
//                cout << "\t";
//                i++;
//                j = 0;
//            }
//            else
//            {
//                j++;
//            }
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
////    freopen("","r",stdin);
////    freopen("","w",stdout);
//
//    _game.assign(9, vector<int>(9, -1));
//
////    for (int i = 0; i < 9; i++) {
////        for (int j = 0; j < 9; j++) {
//            int winner = bfs(0, 0);
//
//            if (winner == 1)
//                cout << "The second player wins!\n";
//            else if (winner == 0)
//                cout << "The first player wins!\n";
//            else
//                cout << "Tie!\n";
//
////        }
////    }
//
//
//}