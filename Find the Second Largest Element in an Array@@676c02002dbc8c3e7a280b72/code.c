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
    int secmax=arr[0],max=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i]){
            secmax=max;
            max=arr[i];
        }
    }
    printf("%d",secmax);
}