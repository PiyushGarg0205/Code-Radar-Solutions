#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    scanf("%s",&c);
    int len=strlen(c);
    int count=0;
    int inword=0;
    for(int i=1;i<len;i++){
        if((c[i]!=' ')&&(inword==0)){
            count+=1;
            inword=1;
        }
        else{
            inword=0;
        }
    }
    printf("%d",count);
}