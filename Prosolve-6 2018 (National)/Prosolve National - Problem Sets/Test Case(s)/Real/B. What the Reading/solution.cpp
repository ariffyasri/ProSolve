#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll,ll> pii;
#define REP(i,n) for(ll i=0;i<n;i++)

#ifdef DEBUG
#define dbg(x) x
#define dbgp(x) cerr << x << endl;
#else
#define dbg(x) //x
#define dbgp(x) //cerr << x << endl;
#endif

#define MAX_N 100010

int main(){
    int n, q;
    cin >> n >> q;

    map<int, int, greater<int>> readings;

    REP(i, n) {
        int a, b;
        cin >> a >> b;
        readings[a] = b;
    }

    REP(i, q) {
        int r;
        cin >> r;
        auto last = readings.lower_bound(r);
        dbgp("Query " << r)
        if (last == readings.end()) {
            cout << -1 << " " << -1 << " " << readings.rbegin()->first << endl;
        } else {
            auto next = last;
            next--;
            if (next == readings.end()) {
                cout << last->second << " " << last->first << " " << -1 << endl;
            } else {
                cout << last->second << " " << last->first << " " << next->first << endl;
            }
        }
    }
}