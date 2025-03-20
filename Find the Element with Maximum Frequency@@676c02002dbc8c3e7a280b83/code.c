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
    int maxcount=0;
    int minnum=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if((i!=j)&&(arr[i]==arr[j])){
                count+=1;
            }
        }
        if(count>maxcount){
            maxcount=count;
            minnum=arr[i];
        }
        else if(count==maxcount){
            if(arr[i]<minnum){
                minnum=arr[i];
            }
        }
    }
    printf("%d",minnum);
}