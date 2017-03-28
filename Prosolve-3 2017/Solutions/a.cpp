#include <bits/stdc++.h>
using namespace std;

char pyramid[100][100][100];

void sieve_pyramid(int n) {

    int space;

    for(int i=1, r=0; i<=n; i+=2, r++) {

        space = (n-i)/2;

        // fill up the edges with spaces
        for(int j=0; j<space; j++)
            pyramid[n][r][j] = pyramid[n][r][space+i+j] = ' ';

        // fill middle with stars
        for(int j=space; j<space+i; j++)
            pyramid[n][r][j] = '*';
    }
}

int main() {

    // sieve pyramids beforehand
    for(int i=3; i<=50; i += 2) {
        sieve_pyramid(i);
    }

    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        
        int N, maxh;
        cin >> N;

        // find height for top-left pyramid
        maxh = ceil((float)N / 2);
        
        for(int j=0; j<maxh; j++) {
            for(int k=j, l=N; k>=0; k--, l -= 2) {
                cout << pyramid[l][k];
            }
            cout << endl;
        }
    }

    return 0;
}