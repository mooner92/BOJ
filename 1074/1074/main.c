#include <stdio.h>
#include <math.h>

int main(){
    int n,c,r;
    scanf("%d",&n);
    scanf("%d",&r);
    scanf("%d",&c);
       
        int ans = 0;
        int y = pow(2, n) / 2;
        int x = y;
     
        while (n-- > 0) {
            int temp = pow(2, n) / 2;
            int skip = pow(4, n);
     
            if (r < y && c < x) {
                
                x -= temp;
                y -= temp;
            } else if (r < y && x <= c) {
                
                x += temp;
                y -= temp;
                ans += skip;
            } else if (y <= r && c < x) {
                    
                x -= temp;
                y += temp;
                ans += skip * 2;
            } else {
                
                x += temp;
                y += temp;
                ans += skip * 3;
            }
        }
    printf("%d", ans);
}


    

