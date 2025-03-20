#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        int incount=0;
        for(int j=0;j<n;j++){
        if((i!=j)&&(arr[i]==arr[j])){
            incount+=1;
        }
        }
        if(count<incount){
            count=incount;
            max=arr[i];
        }
        else if(count==incount){
            max=arr[i]<max?arr[i]:max;
        }
    }
    printf("%d",max);
}