#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum[n];
    for(int i=0;i<n;i++){
        int tsum=0;
        for(int j=0;j<i+1;j++){
            tsum+=arr[j];
        }
        sum[i]=tsum;
    }
    for(int i=0;i<n;i++){
        printf("%d ",sum[i]);
    }
}