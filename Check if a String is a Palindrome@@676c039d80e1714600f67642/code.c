#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    scanf("%s",&c);
    char x[50];
    x=strrev(c);
    int cmp=strcmp(c,x);
    if(cmp==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}