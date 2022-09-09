////
//// Created by Tony on 7/15/2021.
////
//
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N;
//    cin >> N;
//    int even = 0;
//    int odd = 0;
//    int count = 0;
//
//    for (int i = 0 ; i < N; i++)
//    {
//        int a;
//        cin >> a;
//        if (a % 2 == 1) {
//            odd++;
//        }
//        else {
//            even++;
//        }
//
//    }
//
//    while (odd > even)
//    {
//        odd-=2;
//        even++;
//    }
//
//    if (even > odd+1)
//        even = odd+1;
//    count += odd + even;
//    cout << count << "\n";
//
//}