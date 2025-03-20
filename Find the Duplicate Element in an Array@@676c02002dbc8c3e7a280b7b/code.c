#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if((i!=j)&&arr[i]==arr[j]){
            printf("%d",arr[j]);
            x=0;
            break;
        }
    }
    if(x==0){
        break;
    }
    }
}