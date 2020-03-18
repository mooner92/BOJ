/*#include <stdio.h>
int main(){
    float a,b,c;
    float d=0,e=0;
    int i=0;
    scanf("%f%f%f",&a,&b,&c);
    if(b>=c)
        printf("-1\n");
    else{
    while(a+d>=e){
        d+=b;
        e+=c;
        i++;
    }
        printf("%d",i);
    }
    
}*/

#include <stdio.h>
int main() {
    int A, B, C;
    scanf("%d%d%d",&A,&B,&C);
    if (C - B <= 0) printf("-1");
    else printf("%d",A / (C - B) + 1);
     
    return 0;
}
