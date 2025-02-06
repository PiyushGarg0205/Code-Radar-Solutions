#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,limit;
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i++){
        for (j=1;j<=abs(n-i);j++){
            printf(" ");
        }
        if(i<=n){
            limit=i;
        }
        else if(i>n && i!=2n){
            limit=2*(n-1)-1;
        }
        else if(i==2n){
            limit=1;
        }
        for (k=1;k<=2*limit-1;k++){
            printf("*");
        }
        for (l=1;l<=limit;l++){
            printf("*");
        }
        printf("\n");
    }
}