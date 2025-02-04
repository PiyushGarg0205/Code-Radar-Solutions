#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %X\n",chr(a+65));
    printf("Octal: %o",a+2);
}