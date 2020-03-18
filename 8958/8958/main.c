/*#include <stdio.h>
int main(){
    char s[80];
    int a;
    int k=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%s",s);
    }
    for(int j=0;j<sizeof(s);j++){
        while(s[j]=='O'){
            int y=0;
            k++;
            while(s[j+1]=='O'){
                y++;
                k+=y;
                j++;
            }
            
        }
        while(s[j]=='X'){
            j++;
        }
    }
    printf("%d",k);
    
}*/


#include <stdio.h>
#include <string.h>
int main(){
    
    int sum=0;
    int cor=0;
    int lt=0;
    int time;
    scanf("%d",&time);
    while(time>lt){
        char s[81]={0,};
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='O'){
                cor++;
                sum+=cor;
            }
            else
                cor=0;
           
        }
        printf("%d",sum);
        sum=0;
        cor=0;
        lt++;
    }
}
