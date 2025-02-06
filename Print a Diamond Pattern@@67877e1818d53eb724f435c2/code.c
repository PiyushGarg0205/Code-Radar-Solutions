#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,limit;
    scanf("%d",&n);
    limit=1;
    for (i=1;i<=2*n-1;i++){
        for (j=1;j<=abs(n-i);j++){
            printf(" ");
        }

        for (k=1;k<=2*limit-1;k++){
            printf("*");
        }
        if(i<n){
            limit++;
        }
        else{
            limit--;
        }
        printf("\n");
    }
}