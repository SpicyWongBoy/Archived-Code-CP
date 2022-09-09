#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<ll> ufds;
vector<ll> _size;
queue<pair<string,string>> qe;

int par(ll a) {
    if (a == ufds[a])
        return a;
    else
        return ufds[a] = par(ufds[a]);
}

int join(ll a, ll b) {
    a = par(a);
    b = par(b);
    if (a == b) return false;
    else
    {
            if (_size[a] < _size[b])
			{
			ufds[a] = b;
			_size[b] += _size[a];
			_size[a] = _size[b];
			}
			else {
			ufds[b] = a;
			_size[a] += _size[b];
			_size[b] = _size[a];
			}
    }
    return true;

}

int main () {
    int T;
    cin >> T;

    while (T--) {
        int C;
        cin >> C;
		unordered_map<string,ll> names;
        int zax = 1;
        for (int i = 0; i < C; i++) {
            string a, b;
            cin >> a >> b;
            qe.push({a,b});
            if (names[a] == 0) {
                names[a] = zax;
                zax++;
            }
            if (names[b] == 0) {
                names[b] = zax;
                zax++;
            }
        }

        ufds.assign(zax+1,0);
        _size.assign(zax+1,1);
        for (int i = 0; i <= zax; i++)
            ufds[i] = i;

        while (qe.size()) {
            pair<string,string> front = qe.front();
            qe.pop();
            join(names[front.first],names[front.second]);
            cout << _size[ufds[names[front.first]]] << endl;
        }

    }

}