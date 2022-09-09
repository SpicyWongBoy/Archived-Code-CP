//
// Created by Tony on 7/15/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

struct point{
    int x;
    int y;
};

vector<point> rides;
vector<pair<int,int>> blocked;

double dist(point a, point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

bool works(int perm[], int R)
{
    for (int i = 0; i < R-1; i++) {
        for (int j = 0; j < blocked.size(); j++) {
            if (perm[i] == blocked[j].first)
                if (perm[i+1] == blocked[j].second)
                    return false;
            if (perm[i] == blocked[j].second)
                if (perm[i+1] == blocked[j].first)
                    return false;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int C;
    cin >> C;

    for (int i = 0; i < C; i++) {
        int R, B;
        set<double> anslist;

        cin >> R >> B;
        int perm[R];

        for (int i = 0; i < R; i++) {
            point a;
            cin >> a.x >> a.y;
            perm[i] = i;

            rides.push_back(a);
        }
        for (int i = 0; i < B; i++) {
            pair<int,int> a;
            cin >> a.first >> a.second;
            a.first--;
            a.second--;

            blocked.push_back(a);
        }

        do {
            if (works(perm,R)) {
                double ans = 0;
                point start;
                start.x = 0;
                start.y = 0;

                for (int i = 0; i < R; i++) {
                    point curr = rides[perm[i]];
                    ans += dist(start, curr) + 120;
                    start = curr;
                }
                anslist.insert(ans);
            }
        }
        while (next_permutation(perm,perm+R));

        printf("Vacation #%i:\n", i+1);
        if (anslist.size() == 0)
            printf("Jimmy should plan this vacation a different day.\n\n");
        else
            printf("Jimmy can finish all of the rides in %.3f seconds.\n\n",*anslist.begin());


        rides.clear();
        blocked.clear();
    }



}