#include <bits/stdc++.h> // gcc or clang only
using namespace std;

// by default if variable is declared in global scope
// its value will be automatically initialized to zero
bool visited[10];
int dist_mat[10][10];
int H, N;

int tsp(int src, int current_cost, int num_visited)
{
    // recursion stopping condition = if all houses have been visited
    if (num_visited == N) {
        if (dist_mat[src][H] == 0)  // if there is no path between last house & initial house
            return INT_MAX;
        return current_cost + dist_mat[src][H];  // current cost + cost travelling back home
    }

    int cost=INT_MAX;
    for (int i=0; i<N; i++) {
        /**
         * 1) if there is a path between src->i
         * 2) no singleton traversal (src != i)
         * 3) if `i` not visited before
         */
        if (dist_mat[src][i] != 0 && src != i && visited[i] == false) {
            visited[i]=true;
            cost = min(cost, tsp(i, current_cost + dist_mat[src][i], num_visited + 1));
            visited[i]=false;
        }
    }

    return cost;
}

int main()
{
    int P;
    cin >> N >> H >> P;
    
    for (int i=0; i<P; i++) {
        int S, D, C;
        cin >> S >> D >> C;
        dist_mat[S][D] = dist_mat[D][S] = C;  // undirected edge
    }

    visited[H]=true;
    cout << tsp(H, 0, 1) << endl;

    return 0;
}