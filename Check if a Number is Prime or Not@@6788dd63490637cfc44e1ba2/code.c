#include <stdio.h>
int main() {
    int a,i;
    scanf("%d",&a);
    for (i=2;i<=(a/2);i++){
        if (a%i==0){
            printf("Not Prime");
            break;
        }
    }
    if (a%i==0 || a==2 || a==1 || a==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
}