#include <stdio.h>
int main(){
    int n,total=0;
    scanf("%d",&n);
    char s[100]={0,};
    scanf("%s",s);
    for(int i=0;i<n;i++){
        total+=s[i]-'0';
        
    }
    printf("%d",total);
}
