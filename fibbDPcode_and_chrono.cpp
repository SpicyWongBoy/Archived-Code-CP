#include <bits/stdc++.h>

using namespace std;

using namespace std::chrono;

typedef long long ll;

vector<ll> sequence;

ll fibb(ll index, ll n) {
    if (index == n || index < 0) {
        return 0;
    }
    if (sequence[index] != -1) {
        return sequence[index];
    }

    ll a = fibb(index-1,n) + fibb(index-2,n);

    sequence.at(index) = a;

    return fibb(index+1,n);
}

int main() {
    cin.tie();
    ios_base::sync_with_stdio();
    auto start = high_resolution_clock::now();

    //num is the number of fibbonachi numbers required to get starting from 0;
    int n;
    cin >> n;
    sequence.assign(n+1,-1);
    sequence.at(0) = 0;
    sequence.at(1) = 1;


    fibb(2,n);



    cout << sequence.at(n-1) << " ";
    cout << endl;
    auto stop = high_resolution_clock::now();
    cout << (duration_cast<microseconds>(stop-start)).count() << " microseconds";

}
