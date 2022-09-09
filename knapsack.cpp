#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

//5 3
//1 5
//10 5
//100 5
//6 4
//5 4
//4 3
//3 2
//2 1

struct items {
    ll value;
    int weight;
};

ll knapsack(int capacity, items boba[], int n) {
    if (n == 0 || capacity == 0) {
        return 0;
    }
    if (boba[n - 1].weight > capacity) {
        knapsack(capacity, boba, n - 1);
    } else {
        return max(boba[n - 1].value + knapsack(capacity - boba[n - 1].weight, boba, n - 1), knapsack(capacity, boba, n - 1));
    }
}

int main() {
    cin.tie();
    ios_base::sync_with_stdio();
    ifstream fin("knapsack.in");
    int cases;
    fin >> cases;
    while (cases--) {
        int nums;
        int capacity;
        fin >> nums >> capacity;
        items boba[nums];
        for (int i = 0; i < nums; i++) {
            fin >> boba[i].value >> boba[i].weight;
        }

        sort(boba, boba+nums, [](const items a, const items b) {
            return b.weight > a.weight;
        });

        printf("Result: %d\n", knapsack(capacity, boba, nums));

    }
    return 0;
}
