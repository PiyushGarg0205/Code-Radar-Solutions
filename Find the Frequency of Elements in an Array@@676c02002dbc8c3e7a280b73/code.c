#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int arr1[n];
    for(int i=0;i<n;i++){
        int count=1;
        if(arr[i]!=10000){
        for(int j=i+1;j<n;j++){
            if((arr[i]==arr[j])){
                count+=1;
                arr[j]=10000;
            }
            
        }
           printf("%d %d\n",arr[i],count);
        }
    }
}