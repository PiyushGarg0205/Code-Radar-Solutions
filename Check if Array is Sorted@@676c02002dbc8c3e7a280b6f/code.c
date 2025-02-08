#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d "&a);
        arr[i]=a;
    }
    int x=0
    for (int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("Not Sorted");
            x=1;
            break;
        }
    }
    if(x==0){
        printf("Sorted");
    }
}