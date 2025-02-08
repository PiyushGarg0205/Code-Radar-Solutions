#include <stdio.h>
int bubleSort(int arr[],n){
    int i,j;
    for (i=0;i<n;i++){
        int temp;
        for(j=1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}
int printArray(int arr[],n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}