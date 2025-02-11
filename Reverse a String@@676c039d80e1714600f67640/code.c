#include <stdio.h>
#include <string.h>
int main() {
    char c[50];
    printf("%s",&c);
    int length=strlen(c);
    for (int i=length-1;i>0;i--){
        printf("%c",c[i]);
    }
}