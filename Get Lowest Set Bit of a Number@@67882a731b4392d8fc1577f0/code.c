#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int position=0;
    while((num & 1)==0){
        num >>=1;
        position+=1;
    }
    printf("%d",position);
}