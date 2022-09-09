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
//string hop(string line) {
//    if (line.length() < 3)
//        return line;
//
//    if (line[0] == 'x' && line[1] == 'x' && line[2] == '.')
//    {
//        line[0] = '.';
//        line[2] = 'x';
//    }
//
//    return line[0]+hop(line.substr(1));
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int C;
//    cin >> C;
//
//    for (int i = 0; i < C; i++) {
//        string line;
//        cin >> line;
//
//        for (int j = 0; j < 30; j++){
//            line = hop(line);
//        }
//        cout << line << "\n";
//    }
//}
