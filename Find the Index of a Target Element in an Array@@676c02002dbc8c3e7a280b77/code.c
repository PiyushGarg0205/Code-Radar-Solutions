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
    int t;
    int count=0;
    scanf("%d",&t);
    for (int i=0;i<n;i++){
        if(arr[i]==t){
            break;
        }
        else{
            count+=1;
        }
    }
    printf("%d",count);
}