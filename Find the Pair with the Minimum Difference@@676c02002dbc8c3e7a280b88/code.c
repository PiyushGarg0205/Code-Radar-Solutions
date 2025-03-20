#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=10000;
    int minimum[2];
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
        int sub=arr[j]-arr[i];
        if(sub<0){
            sub=sub*-1;
        }
        if(sub<min){
            min=sub;
            minimum[0]=arr[i];
            minimum[1]=arr[j];
        }
    }
    }
    if(n==1){
        printf("-1");
    }
    else{
    for(int i=0;i<2;i++){
        printf("%d",minimum[i]);
    }}
}