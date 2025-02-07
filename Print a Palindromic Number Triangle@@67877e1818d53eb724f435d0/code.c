#include <stdio.h>
int main() {
    int i,j,k,n,limit;;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");

        }
        limit=1;
        for (k=1;k<=2*i-1;k++){
            if(limit<i){
                printf("%d",limit++);
            }
            else{
                printf("%d",limit--);
            }

        }
        printf("\n");
    }
}