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
        else if(arr[0]<arr[1]){
            goto increasing;
        }
        else{
            printf("YES");
        }
        intcreasing:
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i+1]){
                printf("NO");
                break;
            }
            else{
                printf("YES");
            }
        }
        decreasing:
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i+1]){
                printf("NO");
                break;
            }
            else{
                printf("YES");
            }
        }
    }
}