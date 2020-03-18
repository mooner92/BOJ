#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    for(int i=0;i<1002;i++){
        n= rand()%3;
        printf("%d\n",n);
    }
}
