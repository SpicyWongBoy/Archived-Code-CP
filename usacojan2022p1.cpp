////
//// Created by Tony on 1/29/2022.
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
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
////    freopen("","r",stdin);
////    freopen("","w",stdout);
//
//    vector<string> ans(3,"");
//    vector<string> guess(3,"");
//    vector<int> alphacountans(26,0);
//    vector<int> alphacountguess(26,0);
//    int yellow = 0;
//    int green = 0;
//    for (int i = 0; i < 3; i++)
//        cin >> ans[i];
//    for (int i = 0; i < 3; i++)
//        cin >> guess[i];
//    for (string i : ans)
//    {
//        for (char j : i)
//            alphacountans[j-'A']++;
//    }
//    for (string i : guess)
//    {
//        for (char j : i)
//            alphacountguess[j-'A']++;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            if (ans[i][j] == guess[i][j])
//            {
//                green++;
//                alphacountans[ans[i][j]-'A']--;
//                alphacountguess[ans[i][j]-'A']--;
//            }
//        }
//    }
//    for (int i = 0; i < 26; i++) {
//        yellow += min(alphacountans[i],alphacountguess[i]);
//    }
//    cout << green << endl << yellow << endl;
//}