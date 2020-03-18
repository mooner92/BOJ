#include <stdio.h>
int main() {
    int a, b;
    int q, w, e, r;
    scanf("%d %d", &a, &b);
    q = a * ((b%100)%10);
    w = a * ((b%100)/10);
    e = a * (b/100);
    r = a * b;
    printf("%d\n%d\n%d\n%d", q, w, e, r);
}

