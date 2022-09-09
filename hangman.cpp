//
// Created by Tony on 12/4/2021.
//

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define f first
#define s second
#define eb emplace_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

//    freopen("","r",stdin);
//    freopen("","w",stdout);
    int c;
    cin >> c;

    while (c--) {
        vector<string> dic;
        vector<string> queries;
        string category;
        cin >> category;
        int n;
        cin >> n;
        dic.assign(n,"");
        for (int i = 0; i < n; i++){
            string zax;
            cin >> zax;
            dic[i] = zax;
        }
        int q;
        cin >> q;
        queries.assign(q,"");
        for (int i = 0; i < q; i++) {
            string zax;
            cin >> zax;
            queries[i] = zax;
        }

        for (int i = 0; i < q; i++) {
            bool ok = false;
            string currq = queries[i];
            for (int j = 0; j < n; j++) {
                if (currq.length() != dic[j].length())
                    continue;
                ok = true;
                for (int z = 0; z < dic[j].length(); z++) {
                    if (currq[z] == '_')
                        continue;
                    ok &= (currq[z] == dic[j][z]);
                }
                if (ok) {
                    for (int z = 0; z < currq.length(); z++) {
                        if (currq[z] == '_') {
                            for (int d = 0; d < dic[j].length(); d++) {
                                if (z == d)
                                    continue;
                                if (dic[j][d] == dic[j][z] && currq[d] != '_') {
                                    ok = false;
                                }
                            }
                        }
                    }
                    break;
                }
            }
            if (ok)
                cout << "No cheaters here!" << endl;
            else
                cout << "That's not a word for a(n) " << category << "!" << endl;
        }

    }

}