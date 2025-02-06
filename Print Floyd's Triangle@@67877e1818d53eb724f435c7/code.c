#include <stdio.h>
int main() {
    int i,j,n,limit=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=limit;j<2*limit;j++){
            printf("%d ",j);
        }
        limit++;
        printf("\n");
    }
}