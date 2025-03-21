#include<stdio.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    char c1[50];
    fgets(c1,sizeof(c1),stdin);
    int countc=0;
    for(int i=0;i<50;i++){
        if(c[i]=='\0'){
            countc+=1;
            break;
        }
        else{
            countc++;
        }
    }
    int countc1=0;
    for(int i=0;i<50;i++){
        if(c[i]=='\0'){
            break;
        }
        else{
            countc++;
        }
    }

    for(int i=0;i<countc1;i++){
        c[countc++]=c1[i];
    }
    c[countc]=='\0';
    printf("%s",c);

}