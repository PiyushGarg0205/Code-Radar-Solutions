#include <stdio.h>
#include <string.h>
int main(){
    char c[50];
    scanf("%s",&c);
    int n=strlen(c);
    int count=0;
    for(int i=0;i<n;i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
            count+=1;
        }
    }
    printf("%d",count);
}