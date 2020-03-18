#include <stdio.h>
#include <math.h>
int main(){
    printf("enter");
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        int x1,y1,r1,x2,y2,r2;
        int t1,t2,t3,t4,x3,y3,s1;
        double f1;
        
        scanf("%d%d%d%d%d%d",&x1, &y1, &r1, &x2, &y2, &r2);
        if(x1<=-10000 || 10000<=x1){
            break;
        }
        if(y1<=-10000 || 10000<=y1){
            break;
        }
        if(x2<=-10000 || 10000<=x2){
            break;
        }
        if(y2<=-10000 || 10000<=y2){
            break;
        }
        if(r1<=0 || 10000<=r1){
            break;
        }
        if(r2<=0 || 10000<=r2){
            break;
        }
        
        t1=pow(x1, 2);
        t2=pow(y1, 2);
        t3=pow(x2, 2);
        t4=pow(y2, 2);
        s1=r1+r2;
        x3=t3-t1;
        y3=t4-t2;
        f1=sqrt(x3+y3);
        
        if(x1==x2 && y1==y2){
            if(f1==s1){
                printf("-1");
            }
            else{
                printf("0");
            }
        }
        
        else{
            if(f1==s1){
                printf("1");
                       
                   }
                   else if(f1<s1){
                       printf("2");
                   }
                   else if(f1>s1){
                       printf("0");
                   }
        }
                
        
    }
}
