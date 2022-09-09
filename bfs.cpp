//
// Created by Tony on 7/20/2021.
//


#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector<vector<int>> adj;
int n;

//saved distances from all the nodes to each other node
vector<vector<int>> finaldistances(n);
vector<vector<int>> parents(n);

// method to build adjacency matrix
void addAdj(int a, int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}

//bfs implementation
void bfs(int s, int n) {

    //declare and define the variables inside the method so I dont have to repeatedly define them in the [int main()]
    queue<int> q;
    vector<bool> used(n, false);
    vector<int> d(n,0), p(n,0);

    //add current vertex to queue
    q.push(s);
    //set current vertex as visited
    used[s] = true;
    //set first source as first parent (where they have no parents)
    p[s] = -1;
    while (!q.empty()) {
        //get and remove first element in queue
        int curr = q.front();
        q.pop();
        //go through the adjacency matrix (paths from index s)
        for (int next : adj[curr]) {
            if (!used[next]) {
                //mark visited then put into queue
                used[next] = true;
                q.push(next);

                //distance by edge count
                d[next] = d[curr] + 1;

                //the parent of p[u] is the source S
                p[next] = curr;
            }
        }
    }

    //add the set of distances found into print vector
    finaldistances[s] = d;
    parents[s] = p;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //how many vertexes there are
    n = 5;

    //defining global variables
    adj.assign(n, vector<int>());
    finaldistances.assign(n,vector<int>());
    parents.assign(n,vector<int>());
    //building adjacency matrix
    addAdj(0, 1);
    addAdj(0, 4);
    addAdj(1, 2);
    addAdj(1, 3);
    addAdj(1, 4);
    addAdj(2, 3);
    addAdj(3, 4);
    /***
     * looks something like this
     *  0 - 1 \
     *  | / |  2
     *  4 - 3 /
     */

    //print statements to make it look nice
    cout << "\t\t  ";
    for (int i = 0; i < n; i++) {
        cout << i << " ";
    }

    cout << "\n";
    for (int i = 0; i < finaldistances.size(); i++) {
        bfs(i,n);
        cout << "distances from " << i << ": ";
        for (int j = 0; j < finaldistances[i].size(); j++) {
            cout << finaldistances[i][j] << " ";
        }
        cout << "\n";
    }

    //when going through the source, what are the parents as it goes through
    for (int i = 0; i < parents.size(); i++) {
        bfs(i,n);
        cout << "       parents " << i << ": ";
        for (int j = 0; j < parents[i].size(); j++) {
            cout << parents[i][j] << " ";
        }
        cout << "\n";
    }

}