#include <stdio.h>
int main(){
    int s[9];
    int a=0,b=0;
    
    for(int i=0;i<9;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<9;i++){
        if(s[i]>a){
            a=s[i];
            
            b=i;
        }
    }
    printf("%d\n",a);
    printf("%d",b+1);
}
