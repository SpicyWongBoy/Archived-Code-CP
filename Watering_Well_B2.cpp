//
// Created by Tony on 9/10/2022.
//

#include <bits/stdc++.h>

using namespace std;

long long MOD = 1000000007;

long long mult(long long a, long long b) {
    return ((a%MOD)*(b%MOD))%MOD;
}

int main(){
    freopen("watering_well_chapter_2_input.txt","r",stdin);
    freopen("watering_well_chapter_2_output.txt","w",stdout);

    int tests;
    cin >> tests;
    for (int i = 1; i <= tests; i++) {

        long long t,w;
        cin >> t;
        vector<long long> tree_points_x(t,0);
        vector<long long> tree_points_y(t,0);
        long long sum_of_trees_x = 0, sum_of_trees_y = 0;
        for (int j = 0; j < t; j++) {
            cin >> tree_points_x[j] >> tree_points_y[j];
            sum_of_trees_x = ((sum_of_trees_x%MOD)+(tree_points_x[j]%MOD))%MOD;
            sum_of_trees_y = ((sum_of_trees_y%MOD)+(tree_points_y[j]%MOD))%MOD;
        }
        cin >> w;
        vector<long long> well_points_x(w,0);
        vector<long long> well_points_y(w,0);
        for (int j = 0; j < w; j++) cin >> well_points_x[j] >> well_points_y[j];

        long long answers_x = 0;
        long long answers_y = 0;

        for (int j = 0; j < t; j++) {
            answers_x = ((answers_x%MOD) + (mult(tree_points_x[j],tree_points_x[j])))%MOD;
            answers_y = ((answers_y%MOD) + (mult(tree_points_y[j],tree_points_y[j])))%MOD;
        }

        answers_x %= MOD;
        answers_y %= MOD;

        long long sum = 0;
        for (long long k : well_points_x)
            sum = ((sum%MOD)+mult(mult(t,k),k)%MOD+(mult(mult(-sum_of_trees_x,2),k))%MOD+(answers_x%MOD))%MOD;
        for (long long k : well_points_y){
            sum = ((sum % MOD) + mult(mult(t, k), k)%MOD +(mult(mult(-sum_of_trees_y, 2), k))%MOD +(answers_y % MOD))%MOD;
        }
        if (sum < 0)
            sum = 1000000007 + sum;
        cout << "Case #" << i << ": " << sum%MOD << endl;
    }

    return 0;
}
