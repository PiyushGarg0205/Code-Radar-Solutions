#include <stdio.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for (i=1;i<=2*n-1;i++){
        for (j=1;j<=abs(n-i);j++){
            printf(" ");
        }
        for (k=1;;k++){
            if (i<=n){
                k<=2*i-1;
            }
            else{
                k<=2*(i-n+1)-1;
            }
            printf("*");
        }
        printf("\n");
    }
}