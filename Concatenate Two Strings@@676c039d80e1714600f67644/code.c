#include<stdio.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    printf("%s",c);
}