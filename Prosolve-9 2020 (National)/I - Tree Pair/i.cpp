#include <bits/stdc++.h>
using namespace std;

int n, aib[200005];

inline int lsb(int & x){
    return x & -x;
}

void update(int val, int pos){
    for(int i = pos; i <= n * 2; i += lsb(i))
        aib[i] += val;
}

int query(int pos){
    int rval = 0;
    for(int i = pos; i > 0; i -= lsb(i))
        rval += aib[i];
    return rval;
}

vector<int> graph[100005];
int t, dad[100005];
long long ans;

void dfs(int x){
    ans += (long long)query(x + t) - query(x - t - 1);
    update(1, x);
    for(int i = 0; i < graph[x].size(); ++i)
        dfs(graph[x][i]);
    update(-1, x);
}

int main() {
    cin >> n >> t;
    for(int i = 1; i < n; ++i){
        int x, y;
        cin >> x >> y;
        dad[y] = x;
        graph[x].push_back(y);
    }
    for(int i = 1; i <= n; ++i)
        if(!dad[i])
            dfs(i);
    cout << ans;
    return 0;
}
