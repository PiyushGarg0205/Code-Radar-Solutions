#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    char c;
    scanf("%c",&c);
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(str[i]==c){
            count+=1;
        }
        }
        printf("%d",count);
    }
