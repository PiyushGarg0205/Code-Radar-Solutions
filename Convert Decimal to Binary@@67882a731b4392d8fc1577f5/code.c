#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int binary[32];
    int index=0;
    while(num !=0){
        binary[index++]=num&1;
        num>>=1;
    }
    for (i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }

}