#include <stdio.h>
#include <string.h>
int main(){
    double t;
    int max=0;
    double total=0.0;
    scanf("%lf",&t);
    double s[1001];
    for(int i=0;i<t;i++){
        scanf("%lf",&s[i]);
        
    }
    for(int j=0;j<t;j++){
        if(s[j]>max){
            max=s[j];
        }
    }
    for(int k=0;k<t;k++){
        s[k]=((s[k]/max)*100);
        total+=s[k];
    }
    
    printf("%lf",total/t);
    
   
}
