#include <stdio.h>

int main(){
    int num,w,h,c;
    scanf("%d",&num);
    scanf("%d%d%d",&w,&h,&c);
    int s[w*h],x[50],y[50];
    for(int i=0;i<(num*2);i++){
        scanf("%d",s);
    }
    for(int j=0;j<sizeof(s);j++){
        if(j%2==0){
            x[j]=s[j];
        }
        else
            y[j]=s[j];
    }
    
}
