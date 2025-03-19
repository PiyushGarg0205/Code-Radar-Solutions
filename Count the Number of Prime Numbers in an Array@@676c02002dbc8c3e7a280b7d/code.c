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
    int count=0;
    for (int i=0;i<n;i++){
        int x=0;
        for(int j=2;j<=(arr[i])/2;j++){
            if(arr[i]%j==0){
                x=1;
                break;
            }
        }
        if(x==0 || arr[i]==2){
            count+=1;
        }
    }
    printf("%d",count);
}