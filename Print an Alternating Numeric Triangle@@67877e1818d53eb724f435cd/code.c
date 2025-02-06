#include <stdio.h>
int main() {
    int i,j,n,num=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=i;j++){
            if (i%3==0){
                num=1;
            }
            if(num==1){
                printf("%d ",num);
                num--;
            }
            else{
                printf("%d ",num++);

            }
        }
        printf("\n");
    }
}