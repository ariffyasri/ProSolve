#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, q, j;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    cin >> q;
    while(q--) {

        cin >> j;

        int t = 0;
        for(int i=0; i<n; i++)
            if(arr[i] == j)
                t++;

        cout << j << " = " << t << endl;
    }

    return 0; 
}