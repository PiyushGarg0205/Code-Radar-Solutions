#include <stdio.h>

int main() {
    int num, nth;
    printf("Enter a number and the bit position: ");
    scanf("%d %d", &num, &nth);
    int sb = ~(1 << nth); 
    int newnum = num & sb; 
    printf("%d\n", newnum);
    return 0;
}
