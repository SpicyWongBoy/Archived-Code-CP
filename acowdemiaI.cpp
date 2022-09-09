//
// Created by Tony on 8/18/2021.
//


#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, L;
    cin >> N >> L;

    vector<int> papers(N, 0);
    unordered_map<int, int> freq;

    for (int i = 0; i < N; i++) {
        cin >> papers[i];
        freq[papers[i]]++;
    }

    sort(papers.begin(), papers.end());
    int h = 1e5;

    for (; h>=0; h--)
        if (h <= papers.size()-(lower_bound(papers.begin(),papers.end(),h)-papers.begin())+min(freq[h-1],L))
            break;

    cout << h << endl;

}