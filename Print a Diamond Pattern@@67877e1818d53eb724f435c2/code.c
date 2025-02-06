#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,limit;
    scanf("%d",&n);
    for (i=1;i<=n;){
        for (j=1;j<=abs(n-i);j++){
            printf(" ");
        }
        for (k=1;k<=2*i-1;k++){
            printf("*");
        }
        if(i<n){
            i++;
        }
        else{
            i--;
        }
    }
}