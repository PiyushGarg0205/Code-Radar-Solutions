#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    if(n%2!=0){
        printf("%d",arr[(n%2)+1]);
    }
    else{
        int median=(arr[n/2]+arr[(n/2)+1]);
        printf("%d",median/2);
    }
}