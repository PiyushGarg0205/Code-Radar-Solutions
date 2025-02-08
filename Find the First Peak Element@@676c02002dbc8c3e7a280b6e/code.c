#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        int a;
        scanf("%d\n",&a);
        arr[i]=a;
    }
    int x=0;
    for (int i=0;i<n-1;i++){
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            x=1;
        }
    }
    if(x==0){
        printf("%d",-1);
    }
}