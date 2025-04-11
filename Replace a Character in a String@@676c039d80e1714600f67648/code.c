#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    if (c[len - 1] == '\n') {
        c[len - 1] = '\0';
        len--;
    }
    char original;
    scanf("%c",&original);
    char newchar;
    scanf("%c",&newchar);
    int length=strlen(c);
    for(int i=0;i<length;i++){
        if(c[i]==original){
            c[i]=newchar;
        }
    }
}