//
// Created by Tony on 8/22/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vi daddy;

void init(int N) {
    for (int i = 1; i <= N; i++)
        daddy[i] = i;
}

int find(int x) {
    return (x == daddy[x]) ? x : daddy[x] = find(daddy[x]);
}

void uni(int a, int b) {
    a = find(a);
    b = find(b);
    if (a != b)
        daddy[a] = b;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);
	
	int N;
	cin >> N;
	
	daddy.assign(N+1,0);
	
	init(N);

}