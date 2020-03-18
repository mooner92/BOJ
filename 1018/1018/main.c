/*#include <stdio.h>

int main(){
    
    int n,m;
    int t=0;
    int a[n*m];
    int l=0;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n*m;i++){
        scanf("%c",&a);
        t++;
        if(t>0){
            if(m/t==1 || m/t==2 || m/t==3 || m/t==4 || m/t==5 || m/t==6 || m/t==7 || m/t==8 || m/t==9 || m/t==10){
                if(a[t]!=a[t-1]){
                    l++;
                }
            }
            else if(a[t]==a[t-1]){
                l++;
            }
            
        }
    }
    
}*/


main(m,n,i,j,l,o,k,min){
    char map[50][50];
     scanf("%d %d",&n,&m);
 
     for(int i=0;i<n;i++)
     scanf("%s",map[i]);
    min=64;
    for(i=0;i<=n-8;i++)
        for(j=0;j<=m-8;j++){
        k=0;
        for(l=0;l<8;l++)
            for(o=0;o<8;o++)k+=((map[i+l][o+j]&1)==((l+o)%2));
            if(k<min)min=k;
            if(64-k<min)min=64-k;}printf("%d",min);
}
