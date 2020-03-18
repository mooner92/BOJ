#include <stdio.h>

int main() {
    int X;
    scanf("%d",&X);
 
    int r = 0;
    while (X != 0) {
        if (X % 2 == 1) r++;
        X /= 2;
    }
    printf("%d",r);
}

