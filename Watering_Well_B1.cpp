//
// Created by Tony on 9/10/2022.
//

#include <bits/stdc++.h>

using namespace std;

int MOD = 1000000007;

long long mult(long long a, long long b) {
    return ((a%MOD)*(b%MOD))%MOD;
}

int main(){
    freopen("watering_well_chapter_1_input.txt","r",stdin);
    freopen("watering_well_chapter_1_output.txt","w",stdout);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {

        int t,w;
        cin >> t;
        vector<long long> tree_points_x(t,0);
        vector<long long> tree_points_y(t,0);
        long long sum_of_trees_x = 0, sum_of_trees_y = 0;
        for (int j = 0; j < t; j++) {
            int x, y;
            cin >> x >> y;
            tree_points_x[j] = x;
            tree_points_y[j] = y;
            sum_of_trees_x = (sum_of_trees_x+x)%MOD;
            sum_of_trees_y = (sum_of_trees_y+y)%MOD;
        }
        cin >> w;
        vector<long long> well_points_x(w,0);
        vector<long long> well_points_y(w,0);
        for (int j = 0; j < w; j++) {
            int x, y;
            cin >> x >> y;
            well_points_x[j] = x;
            well_points_y[j] = y;
        }
        vector<long long> answers_x(3005,0);
        vector<long long> answers_y(3005,0);

        for (int j = 0; j < t; j++) {
            answers_x[0] += (((tree_points_x[j])%MOD)*((tree_points_x[j])%MOD))%MOD;
            answers_y[0] += (((tree_points_y[j])%MOD)*((tree_points_y[j])%MOD))%MOD;
        }
        for (int j = 1; j <= 3000; j++) {
            answers_x[j] = (mult(mult(tree_points_x.size(),j),j)-mult(mult(sum_of_trees_x,2),j)+answers_x[0])%MOD;
            answers_y[j] = (mult(mult(tree_points_y.size(),j),j)-mult(mult(sum_of_trees_y,2),j)+answers_y[0])%MOD;
        }
        long long sum = 0;

        for (long long k : well_points_x) sum = (sum+answers_x[k])%MOD;
        for (long long k : well_points_y) sum = (sum+answers_y[k])%MOD;

        cout << "Case #" << i << ": " << sum%MOD << endl;
    }



    return 0;
}
