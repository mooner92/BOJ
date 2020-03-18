/*#include <stdio.h>
int main(){
    int a,b,v;
    int n=0,d=0;
    scanf("%d%d%d",&a,&b,&v);
    while (n<v) {
        n+=a;
        d++;
        if(n==v)
            printf("%d",d);
        n-=b;
        
    }
    
}*/

/*#include <stdio.h>
int main(){
    int a,b,v;
    int n=0,d=0;
    int c=0;
    scanf("%d%d%d",&a,&b,&v);
    while (c==0) {
        n+=(a-b);
        d++;
        if((v-n)<=a){
            printf("%d",d+1);
            c++;
        }
        
    }
    
}*/

#include <stdio.h>
int main(){
    int a,b,v,d;
    scanf("%d%d%d",&a,&b,&v);
    d=(v-b-1)/(a-b)+1;
    printf("%d",d);
}
    
