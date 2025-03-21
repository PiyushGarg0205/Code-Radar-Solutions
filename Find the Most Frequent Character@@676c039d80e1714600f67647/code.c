#include<stdio.h>
#include<string.h>
int main(){
    char c[50];
    fgets(c,sizeof(c),stdin);
    int len=strlen(c);
    int maxcount=1;
    char x;
    for(int i=0;i<len;i++){
        int count=1;
        for(int j=0;j<len;j++){
            if((i!=j)&&(c[i]==c[j])){
                count+=1;
            }
        }
        if(maxcount<count){
            x=arr[i];
        }
    }
    if(maxcount==1){
        printf("%c",c[len-1]);
    }
    else{
        printf("%c",x);
    }
}