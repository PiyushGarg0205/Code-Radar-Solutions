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
    int count=1;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int count1=1;
        for (int j=0;j<n;j++){
            if((arr[j]=(a+1))){
                count1+=1;
                a+=1;
            }
        }
        if(count<count1){
            count=count1;
        }
    }
    printf("%d",count);
}