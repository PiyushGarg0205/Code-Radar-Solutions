#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int k;
    scanf("%d",&k);
    for (int i=1;i<=k;i++){
        for (int j=0;j<n;j++){
            int temp;
            if(j<n-1){
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else{
                int temp;
                temp=arr[n-1];
                arr[n-1]=arr[n-2];
                arr[0]=temp;
            }

        }
    }
}