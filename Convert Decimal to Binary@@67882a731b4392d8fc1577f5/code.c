#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num=0){
        printf("%d",0);
    }
    else{nt binary[32];
    int index=0;
    while(num !=0){
        binary[index++]=num&1;
        num>>=1;
    }
    int i;
    for (i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }}

}