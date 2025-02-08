#include <stdio.h>
int main() {
    int num,nth;
    scanf("%d",&num,&nth);
    int sb=1<<nth;
    int newnum=num|sb;
    printf("%d",newnum);
}