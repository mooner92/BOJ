#include <stdio.h>
int main(){
    int u;
    scanf("%d",&u);
    for(int i=0;i<u;i++){
        int h,w,n;
        scanf("%d%d%d",&h,&w,&n);
        if(n/h>=1){
            int x,c=n,y=0;
            x=c/h;
            c-=h*x;
            if(c==0){
                c=h;
            }
            y+=c*100;
            
            y+=x+1;
            printf("%d",y);
        
        }
        else{
            int x,y=0;
            x=n;
            y+=x*100;
            y++;
            printf("%d",y);
        }
    }
}
