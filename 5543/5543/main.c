#include <stdio.h>
int main(){
    int a,b,c,d,e;
    int min1,min2;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b){
        min1=a;
        if(min1>c)
            min1=c;
    }
    else{
        min1=b;
        if(min1>c)
            min1=c;
    }
    if(d<e)
        min2=d;
    else
        min2=e;
    
    printf("%d",min1+min2-50);
    
}
