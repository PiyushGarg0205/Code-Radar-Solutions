#include <stdio.h>
int main() {
    int i,j,k,n;
    scanf("%d",&n);
    for (i=1;i<=2;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");

        }
        for (k=1;k<=2*i-1;k++){
            if (k<2*i-1){
                printf("%d",k++);
            }
            else{
                printf("%d",k--);
            }

        }
        printf("\n");
    }
}