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
    int even_count=0,odd_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even_count+=1;
        }
        else if(arr[i]%2!=0){
            odd_count+=1;
        }
    }
    printf("%d %d",even_count,odd_count);
}