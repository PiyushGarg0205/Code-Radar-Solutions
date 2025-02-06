#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,limit;
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i++){
        for (j=1;j<=abs(n-i);j++){
            printf(" ");
        }
        if (i<=n){
                limit=2*i-1;
            }
            else{
                limit=2*(i-n+1)-1;
            }
        for (k=1;k<=limit;k++){
            printf("*");
        }
        printf("\n");
    }
}