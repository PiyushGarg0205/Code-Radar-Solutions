#include <stdio.h>
int main() {
    int num,nth;
    scanf("%d %d",&num,&nth);
    int  sb=1<<nth;
    if(num & sb){
        printf("%d",1);
    }
    else{
        printf("%d",0);
    }
}