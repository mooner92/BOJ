#include <stdio.h>
int main(){
    int a,min=987654321,max=-987654321;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        int t;
        scanf("%d",&t);
        if(min>t)
            min=t;
        if(max<t)
            max=t;
    }
    printf("%d %d",min,max);
}
