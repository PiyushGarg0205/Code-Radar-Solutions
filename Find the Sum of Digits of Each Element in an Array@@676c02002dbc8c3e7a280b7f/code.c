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
    int sumarr[n];
    for(int i=0;i<n;i++){
        int sum=0;
        int a=arr[i];
        if(a<0){
            a=a*-1;
        }
        while(a>0){
            int rem=a%10;
            sum+=rem;
            a=a/10;
        }
        sumarr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d ",sumarr[i]);
    }
}