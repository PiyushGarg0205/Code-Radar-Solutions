#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even[n];
    for(int i=0;i<n;i++){
        even[i]=-100;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[count++]=arr[i];
        }
    }
    int max=-100;
    for(int i=0;i<n;i++){
        if(max<even[i]){
            max=even[i];
        }
    }
    if(max==-100){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}