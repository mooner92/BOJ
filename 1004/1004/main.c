/*#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(int j=0;j<n;j++){
        int x1,x2,y1,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        int k;
        scanf("%d",&k);
        int cnt=0;
        for(int r=0;r<k;r++){
            int c1,c2,r,d;
            int g1,g2;
            scanf("%d%d%d",&c1,&c2,&r);
            d=pow((c1-x1), 2) + pow((c2-y1), 2);
            if(d>r*r){g1=0;}
            else g1=1;
            d=pow((c1-x2), 2) + pow((c2-y2), 2);
            if(d>r*r){g2=0;}
            else g2=1;
            if(g1!=g2)
                cnt++;
        }
        printf("%d",cnt);
    }
    return 0;
}
*/


