#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int msb=1<<31;
    int count=0;
    while((num & msb)==0){
        count+=1;
        num<<=1;
    }
    printf("%d",count);
}