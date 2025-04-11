#include<stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    fgets(str1,sizeof(str1),stdin);
    fgets(str2,sizeof(str2),stdin);
    int len1=strlen(str1);
    int len2=strlen(str2);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
        len1--;
    }
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
        len2--;
    }
    if(len1!=len2){
        printf("No");
        return 0;
    }
    else{
        int anagram=0;
        for(int i=0;i<len1;i++){
            int count =1;
            for(int j=0;j<len1;j++){
                if(i!=j&&(str1[i]==str1[j])){
                    count+=1;
                }
            }
            int found=0;
            int countcomp=1;
            for(int j=0;j<len1;j++){
                if(str1[i]==str2[j]){
                    found=1;
                    countcomp+=1;
                }
            }
            printf("%d",found);
            if(found=1&&count==countcomp){
                anagram=1;
            }
            else{
                anagram=0;
                break;
            }
        }
        if(anagram==1){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
}