#include <stdio.h>
#include <string.h>
/*#include <stdlib.h>


int main(){
    int n=987654321;
    scanf("%d", &n);
    char k[n][50];
    for(int i=0;i<n;i++){
        k= malloc(sizeof(char) * 50);
        
    }
    
    
}

char func1(){
    
    char s[50];
    scanf("%s",s);
    
    return s;
}*/















/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    int i, j, num, len;
    char **arr;
    char answer[50];

    scanf("%d",&num);

    arr = (char**)malloc(sizeof(char*)*num);

    for(i=0;i<num;i++)
        arr[i] = (char*)malloc(sizeof(char)*50);

    for(i=0;i<num;i++)
        scanf("%s",arr[i]);

    for(j=0; arr[0][j] != '\0'; j++) {
        answer[j] = arr[0][j];
    }

    len = strlen(answer);

    for(j=0;j<len; j++) {
        for(i=1; i<num; i++) {
            if(arr[i][j] != arr[i-1][j]) {
                answer[j] = '?';
                break;
            }
            else
                answer[j] = arr[i][j];
        }
    }

    printf("%s",answer);

    return 0;
}*/








/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char c[51],i;
main(p){
    for(gets(gets(c));~scanf(" %c",&p);)
        c[i%=strlen(c)]=c[i++]-p?63:p;puts(c);
}*/






#include <stdio.h>

int main(void) {
    int N;
    char a[51],b[51];
    scanf("%d %s",&N,a);
    for(int i=1;i<N;++i){
        scanf("%s",b);
        for(int j=0;j<51;++j){
            if(a[j]!=b[j]){a[j]='?';}
        }
    }puts(a);
    return 0;
}
