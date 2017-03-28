#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        int h, m, hm;
        scanf("%d:%d", &h, &m);
        hm = 720-h*60-m;
        printf("Case #%d: %02d:%.2d\n", i, hm/60 == 0 ? 12 : hm/60, hm % 60);
    }
    return 0;
}