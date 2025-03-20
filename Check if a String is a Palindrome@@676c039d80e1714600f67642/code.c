#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    scanf("%s",&c);
    int len=strlen(c);
    char x[50];
    int count=len-1;
    for(int i=0;i<len;i++){
        x[i]=c[count--];
    }
    int cmp=strcmp(c,x);
    if(cmp==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}