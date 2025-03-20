#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=1000;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int secondmin=1000;
    for(int i=0;i<n;i++){
        if((arr[i]<secondmin)&&(arr[i]!=min)){
            secondmin=arr[i];
        }
    }
    if(secondmin==1000){
        printf("-1");
    }
    else{
        printf("%d",secondmin);
    }
}