#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector< vi > vvi;
typedef vector< vc > vvc;
typedef pair<int, int> pii;
typedef pair<int, pii> pipii;
typedef set< pipii > node;

vvi weight(20, vi(20));
vvi cost(20, vi(20, INT_MAX));
vvc parent(20, vc(20));
int row, col, _cost;
pii start, fin, coor;
node setq;

// backtrack to source
void backtrack(pii coor) {
    if (coor == start) return;
    char path = parent[coor.first][coor.second];
    if (path == 'U') backtrack({coor.first+1, coor.second});
    if (path == 'D') backtrack({coor.first-1, coor.second});
    if (path == 'L') backtrack({coor.first, coor.second+1});
    if (path == 'R') backtrack({coor.first, coor.second-1});
    cout << path;
}

// update min distance
void update(pii coor, int _cost, char move) {
    if (weight[coor.first][coor.second] == 0) return;
    int sum = weight[coor.first][coor.second] + _cost;
    if (sum < cost[coor.first][coor.second]) {
        cost[coor.first][coor.second] = sum;
        parent[coor.first][coor.second] = move;
        setq.insert({sum, coor});
    }
    if (coor == fin) {
        backtrack(coor);
        exit(0);
    }
}

int main(int argc, char const *argv[]) {
    // initialize maze
    cin >> row >> col;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            char tmp;
            cin >> tmp;
            if (tmp == 'D')start = {i, j}, cost[i][j] = 0;
            else if (tmp == 'C') fin = {i, j}, weight[i][j] = 1;
            else if (tmp == '_') weight[i][j] = 1;
            else if (tmp == 'S') weight[i][j] = 5;
        }
    }
    // traverse maze using dijkstra
    setq.insert({cost[start.first][start.second], start});
    while(!setq.empty()) {
        tie(_cost, coor) = *(setq.begin());
        setq.erase(setq.begin());
        if (coor.first != 0) update({coor.first-1, coor.second}, _cost, 'U');
        if (coor.first != row) update({coor.first+1, coor.second}, _cost, 'D');
        if (coor.second != 0) update({coor.first, coor.second-1}, _cost, 'L');
        if (coor.second != col) update({coor.first, coor.second+1}, _cost, 'R');
    }

    return 0;
}