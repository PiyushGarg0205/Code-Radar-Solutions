#include<stdio.h>
#include<string.h>
int main(){
    char c[100];
    scanf("%s",&c);
    int len=strlen(c);
    int count=0;
    if(c[0]!=' '){
            count+=1;
        }
    for(int i=1;i<len;i++){
        if(c[i]==' '){
            count+=1;
        }
    }
    printf("%d",count);
}