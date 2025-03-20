#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==0||n==2||n==1){
        printf("YES");
    }
    else if(n<0){
        printf("NO");
    }
    else{          //decreasing
    int x=1;
        if(arr[0]>arr[1]){ 
            for(int i=1;i<n-1;i++){
                if(arr[i]<arr[i+1]){
                    x=0;
                    break;
                }
            }
        }
        else if(arr[0]<arr[1]){    //increasing
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    x=0;
                    break;
                }
            }
        }
        else if(arr[0]==arr[1]){
            for(int i=1;i<n-1;i++){
                if(arr[i]==arr[i+1]){
                    x=1;
                }
                else{
                    x=0;
                    break;
                }
            }
        }
        if(x==0){
            printf("NO");

        }
        else{
            printf("YES");
        }
    }
}