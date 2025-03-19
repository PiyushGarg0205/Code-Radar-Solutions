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
    int min=1;
    for(int i=1;i<n;i++){
        if((min>arr[i])){
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(min==arr[j]){
            min+=1;
        }
    }}
    printf("%d",min);
}