#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int num;
    scanf("%d",&num);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            count+=1;
        }
    }
    printf("%d",count);
}