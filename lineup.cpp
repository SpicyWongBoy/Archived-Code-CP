//
// Created by Tony on 7/19/2021.
//

//USACO 2019 DECEMBER CONTEST LIVESTOCK LINEUP

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string c[8] = {"Beatrice", "Sue", "Belinda", "Bessie", "Betsy", "Blue", "Bella", "Buttercup"};

vector<pair<string,string>> must;

// think of each permutation as a 1D number line, and check if absolute differences == 1
bool works(string perm[]){
    int counter = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < must.size(); j++) {
            if (perm[i] == must[j].first && perm[i+1] == must[j].second)
            {
                counter++;
                continue;
            }
            if (perm[i] == must[j].second && perm[i+1] == must[j].first)
            {
                counter++;
                continue;
            }
        }
    }
    return counter == must.size();

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    ifstream fin("lineup.in");
//    ofstream fout("lineup.out");

    int N;
    cin >> N;
    sort(c,c+8);

    for (int i = 0; i < N; i++) {
        pair<string,string> name;
        string t;
        cin >> name.first >> t >> t >> t >> t >> name.second;
        must.push_back(name);
    }

    do{
        if (works(c))
        {
            for (int i = 0; i < 8; i++)
                cout << c[i] << "\n";
            return 0;
        }
    }
    while(next_permutation(c,c+8));


}

