#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==0||n==1||n==2){
        printf("YES");
    }
    else if(n<0){
        printf("NO");
    }
    else{
        if(arr[0]>arr[1]){
            goto decreasing;
        }
        int x;
        else if(arr[0]<arr[1]){
            goto increasing;
        }
        else{
            printf("YES");
        }
        increasing:
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i+1]){
                x=0;
                break;
            }
            else{
                x=1;
            }
        }
        decreasing:
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i+1]){
                x=0;
                break;
            }
            else{
                x=1;
            }
        }
        if(x==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}