#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d",arr[0]);
    }
    for(int i=0;i<n;i++){
        int max=0;
        if(i!=n-1){
        for(int j=i;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    printf("%d ",max);
    }
    else{
        printf("%d",arr[n-1]);
    }
    }
}