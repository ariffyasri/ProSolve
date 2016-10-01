#include <stdio.h>
#include <string.h>

char *bigAdd(char *a, char *b, int ca, int cb, int r) {

    static char t[10000];

    if(ca - 1 < 0 && cb - 1 < 0) sprintf(t, "%c", r * 49);
    else {
        int s = (ca <= 0 ? 48 : a[--ca]) + (cb <= 0 ? 48 : b[--cb]) + r - 96;
        sprintf(t, "%s%d", bigAdd(a, b, ca, cb, (s > 9)), s % 10);
    }

    return t;
}

int main() {

    int T;
    char A[1000], B[1000];
    scanf("%d\n", &T);

    while(T --> 0) {
        scanf("%s", A);
        scanf("%s", B);
        printf("%s\n", bigAdd(A, B, strlen(A), strlen(B), 0));
    }
}
