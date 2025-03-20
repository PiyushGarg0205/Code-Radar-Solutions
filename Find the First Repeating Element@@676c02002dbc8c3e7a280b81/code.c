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
    int x=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i!=j)&&(arr[i]==arr[j])){
                printf("%d",arr[i]);
                x=0;
                break;
            }
        }
        if(x==0){
            break;
        }

    }
}