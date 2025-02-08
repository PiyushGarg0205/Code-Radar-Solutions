#include <stdio.h>
int main() {
    int num,nth;
    scanf("%d %d",&num,&nth);
    int sb=0<<nth;
    int newnum=num&sb;
    printf("%d",newnum);
}