#include <stdio.h>
int main(){
    int n;
    int x=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x*=i;
        
    }
    printf("%d",x);
}
