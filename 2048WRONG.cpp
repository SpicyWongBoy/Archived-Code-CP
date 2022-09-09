#include <bits/stdc++.h>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iterator>
#include <ctype.h>
#include <iostream>

using namespace std;

typedef long long ll;

vector<int> left(vector<int> v) {
    bool check = true;
    if (v.at(0) == v.at(1) && v.at(1) == v.at(2) && v.at(2) == v.at(3)) {
        v.at(0) *= 2;
        v.at(1) *= 2;
        v.at(2) = 0;
        v.at(3) = 0;
        return v;
    }
    for (int i = 0; i < 3; i++) {
        if (v[i + 1] != 0 && v[i + 1] == v[i] && check) {
            v[i] += v[i + 1];
            v[i + 1] = 0;
            i = -1;
            check = false;
        }
        else if (v[i] == 0 && v[i + 1] != 0) {
            v[i] += v[i + 1];
            v[i + 1] = 0;
            i = -1;
        }
    }
    return v;
}

vector<int> right(vector<int> v) {
    bool check = true;
    if (v.at(0) == v.at(1) && v.at(1) == v.at(2) && v.at(2) == v.at(3)) {
        v.at(2) *= 2;
        v.at(3) *= 2;
        v.at(1) = 0;
        v.at(0) = 0;
        return v;
    }
    for (int i = 3; i >= 1; i--) {
        if (v[i - 1] != 0 && v[i - 1] == v[i] && check) {
            v[i] += v[i - 1];
            v[i - 1] = 0;
            i = 4;
            check = false;
        }
        else if (v[i] == 0 && v[i - 1] != 0) {
            v[i] += v[i - 1];
            v[i - 1] = 0;
            i = 4;
        }
    }
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<vector<int>> arr;
    vector<vector<int>> rotate;

    for (int i = 0; i < 4; i++) {
        vector<int> a;
        for (int j = 0; j < 4; j++) {
            int b;
            cin >> b;
            a.push_back(b);
        }
        arr.push_back(a);
    }

    int direction;
    cin >> direction;

    if (direction == 0) {
        for (int i = 0; i < 4; i++) {
            arr.at(i) = left(arr.at(i));
        }
    } else if (direction == 2) {
        for (int i = 0; i < 4; i++) {
            arr.at(i) = right(arr.at(i));
        }
    }
    for (int j = 0; j < 4; j++) {
        vector<int> a;
        for (int i = 0; i < 4; i++) {
            a.push_back(arr.at(i).at(j));
        }
        rotate.push_back(a);
    }
    if (direction == 1) {
        for (int i = 0; i < 4; i++) {
            rotate.at(i) = left(rotate.at(i));
        }
    } else if (direction == 3) {
        for (int i = 0; i < 4; i++) {
            rotate.at(i) = right(rotate.at(i));
        }
    }
    if (direction == 0 || direction == 2) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << rotate[j][i] << " ";
            }
            cout << endl;
        }
    }


}