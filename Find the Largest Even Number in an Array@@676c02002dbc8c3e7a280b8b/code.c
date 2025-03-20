#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even[n];
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[count++]=arr[i];
        }
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(max<even[i]){
            max=even[i];
        }
    }
    if(max==0){
        printf("-1");
    }
    else{
        printf("%d",max);
    }
}