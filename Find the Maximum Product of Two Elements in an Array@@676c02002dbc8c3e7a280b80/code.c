#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        arr[i]=a;
    }
    int maxproduct=0;
    for(int i=0;i<n;i++){
        int product;
        for(int j=0;j<n;j++){
            if(i!=j){
                product=arr[i]*arr[j];
            }
            if(product>maxproduct){
                maxproduct=product;
            }
        }
    }
    printf("%d",maxproduct);
}