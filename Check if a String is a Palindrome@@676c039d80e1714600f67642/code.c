 #include <stdio.h>
 #include <string.h>
 int main(){
    char c[50];
    scanf("%s",&c);
    int n=strlen(c);
    char new_c[50];
    for(int i=n-1;i>=0;i--){
        char d=c[i];
        strcat(new_c,d);
    }
    if(strcmp(new_c,c)){
        printf("Yes");
    }
    else{
        printf("No");
    }
 }