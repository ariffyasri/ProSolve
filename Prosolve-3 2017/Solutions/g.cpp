#include <bits/stdc++.h>
using namespace std;

struct Zrog {
    int id;
    double h, w, l;
} zrog[100000];

int comparator(const Zrog &a, const Zrog &b) {
    double A = a.h*100 + (-a.w) + a.l*10;
    double B = b.h*100 + (-b.w) + b.l*10;
    return A > B;
}

int main() {

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        zrog[i].id = i+1;
        cin >> zrog[i].h >> zrog[i].w >> zrog[i].l;
    }

    sort(zrog, zrog+n, comparator);

    for(int i=0; i<n; i++)
        printf("ID:%d H:%.2f W:%.2f L:%.2f\n", zrog[i].id, zrog[i].h, zrog[i].w, zrog[i].l);

    return 0; 
}