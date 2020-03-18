/*#include <stdio.h>
int main(){
    int a,b;
    int j=0;
    scanf("%d%d",&a,&b);
    int s[50];
    int t[50];
    for(int i=0;i<a;i++){
        scanf("%d",s);
        
        }
    for(int i=0;i<a;i++){
        if(s[i]<b){
        t[j] = s[i];
        j++;
        }}
    for(int i=0;i<a;i++){
        printf("%d\n",t[i]);
    }
}*/

#include<stdio.h>
int main(){
    int N, X, t;

    scanf("%d %d", &N, &X);

    for(int i=0; i<N; i++){
        scanf("%d", &t);
      
        if(X>t)
            printf("%d ", t);
    }
}
