//
// Created by Tony on 7/14/2021.
//

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<int> fw;

int N;
//fw can't be zero indexed so you must N+1 the size

int LSB(int i) {return i & -i;}

int getSum(int i)
{
    int sum = 0;
    i++;

    while(i > 0)
    {
        sum += fw[i];
        i -= LSB(i);
    }
    return sum;
}

void updateFW(int i, int newVal) {
    i++;
    while (i < (N+1))
    {
        fw[i] += newVal;
        i += LSB(i);
    }
}

void constructFenwick(vector<int> a) {
    for (int i=0; i<(N+1); i++)
        updateFW(i, a[i]);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    ifstream fin("sleepy.in");
//    ofstream fout("sleepy.out");

    cin >> N;
    vector<int> v;
    v.assign(N,0);
    int stop = 0;
    for (int i = 0; i < N; i++)
        cin >> v[i];

    for (int j = 0; j < N-1; j++)
        if (v[j] > v[j+1])
         stop = j;
    stop++;

    if (stop == 1) {
        cout << 0 << "\n";
        return 0;
    }

    cout << stop << "\n";

    vector<int> a;
    a.assign(N,0);

    for (int j = stop; j < N; j++) {
        a[v[j]-1]++;
    }

    fw.assign(N+1,0);
    constructFenwick(a);

    int steps = stop-1;

    for (int k = 0; k < stop-1; k++) {
        cout << steps + getSum(v[k]-1) << " ";
        updateFW(v[k]-1,1);
        steps--;
    }
    cout << steps + getSum(v[stop-1]-1) << "\n";
    return 0;
}
