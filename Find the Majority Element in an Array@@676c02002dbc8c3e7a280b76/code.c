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
    int count=1,candidate=0;
    int x=0;
    for(int i=0;i<n;i++){
        int count1=1;
        for (int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count1+=1;
                arr[j]=100;
            }
        }
        if(count1>count){
            count=count1;
            candidate=arr[i];
            x=0;
        }
        else if(count1==count){
            x=1;
        }
    }
    printf("%d",count);
    if(count>(n/2)){
        printf("%d",candidate);
    }
    else{
        printf("-1");
    }
}