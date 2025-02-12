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
    int count=1;candidate=0;
    for(int i=0;i<n;i++){
        int count1=1
        for (int j=1;j<n;j++){
            if(arr[i]==arr[j]){
                count1+=1;
                arr[j]=100;
            }
        }
        if(count1>count){
            count=count1;
            candidate=arr[i];
        }
    }
    printf("%d",candidate);
}