//
// Created by Tony on 7/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        vector<pair<int,int>> times;
        vector<int> naps;
        vector<int> windows;
        for (int j = 0; j < N; j++) {
            int s, e;
            cin >> s >> e;
            times.push_back(make_pair(s,e));
        }

        sort(times.begin(),times.end());

        int begintime = times[0].first;
        int endtime = times[0].second;
        for (int j = 1; j < N; j++) {

            if (endtime < times[j].first) {
                naps.push_back(times[j].first - endtime);
                windows.push_back(endtime-begintime);
                begintime = times[j].first;
                endtime = times[j].second;
            }
            else
                endtime = max(endtime,times[j].second);
        }
        windows.push_back(endtime-begintime);




        cout << naps.size() << " ";
        for (int a : naps)
            cout << a << " ";
        cout << "\n";
        for (int a : windows)
            cout << a << " ";
        cout << "\n";

    }


}