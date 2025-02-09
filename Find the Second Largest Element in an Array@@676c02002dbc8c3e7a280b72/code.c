#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int max=arr[0],secmax=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            secmax=max;
            max=arr[i];
        }
    }
    if(max==secmax){
        for(int i=1;i<n;i++){
           if(secmax<arr[i]){
            secmax=arr[i];
        } 
        }
        if(secmax<max){
            printf("%d",secmax);
        }
        else{
            printf("%d",-1);
        }
    }
    else{
        printf("%d",secmax);
    }
}