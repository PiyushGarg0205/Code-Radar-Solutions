#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    int count=0;
    for(int i=0;i<50;i++){
        if(c[i] == '\0')
{
            break;

        }
        else{
            count+=1;
        }
    }
    printf("%d",count);
}