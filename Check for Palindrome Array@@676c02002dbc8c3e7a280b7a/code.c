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
    int arr1[n];
    int j=n-1;
    for (int i=0;i<n;i++){
        arr1[j--]=arr[i];
    }
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr1[i]){
            x=1;
            break;
        }
    }
    if(x==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
}