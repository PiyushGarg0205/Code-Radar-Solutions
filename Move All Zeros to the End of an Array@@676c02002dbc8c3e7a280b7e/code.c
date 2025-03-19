#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    for(int i=n-1;i<=0;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]>0){
                    int c=arr[i];
                    arr[i]=arr[j];
                    arr[j]=c;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}