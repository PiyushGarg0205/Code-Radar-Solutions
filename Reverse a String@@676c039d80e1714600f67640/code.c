 #include <stdio.h>
 #include <string.h>
 int main(){
    char c[50];
    scanf("%s",&c);
    int n=strlen(c);
    for(int i=n-1;i>=0;i--){
        printf("%c",c[i]);
    }
 }
