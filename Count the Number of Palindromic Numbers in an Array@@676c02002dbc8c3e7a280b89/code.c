#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int newnum=0;
        while(num>0){
            int rem=num%10;
            newnum=newnum*10+rem;
            num=num/10;
        }
        if(newnum==arr[i]){
            count+=1;
        }
    }
    printf("%d",count);
}