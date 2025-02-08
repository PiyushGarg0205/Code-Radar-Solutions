#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int newnum=~(num);
    printf("%d",newnum);
}