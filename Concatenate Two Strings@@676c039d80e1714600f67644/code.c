#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    c[strcspn(c, "\n")] = '\0';
    char c1[50];
    c1[strcspn(c, "\n")] = '\0';
    fgets(c1,sizeof(c1),stdin);
    int countc=0;
    for(int i=0;i<50;i++){
        if(c[i]=='\0'){
            break;
        }
        else{
            countc++;
        }}
    for(int i=0;i<50;i++){
        if(c1[i]=='\0'){
            break;
        }
        else{
            c[++countc]=c1[i];
        }
    }
    printf("%s",c);
}