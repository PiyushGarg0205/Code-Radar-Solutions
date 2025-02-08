#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int bits=sizeof(int)?*8;
    int msb=1<<(bits-1);
    if(msb & a){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}