//
// Created by Tony on 7/21/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void bfs(int cur[]) {
    queue<int> q;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int C;
    cin >> C;
    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
        ll end[3] = {0, 0, 0};
        ll steps = 0;
        for (int j = 0; j < N; j++) {
            int o;
            double d;
            cin >> o >> d;
            if (o == 1) {
                end[1] += d;
                end[2] -= d;
            } else if (o == 2) {
                end[0] += d;
                end[2] -= d;
            } else if (o == 3) {
                end[0] += d;
                end[1] -= d;
            } else if (o == 4) {
                end[1] -= d;
                end[2] += d;
            } else if (o == 5) {
                end[0] -= d;
                end[2] += d;
            } else if (o == 6) {
                end[0] -= d;
                end[1] += d;
            }
        }

        //walk up to the end point
        steps = max(max(abs(end[0]),abs(end[1])),abs(end[2]));
        cout << steps << "\n";
    }
}