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
    for(int i=0;i<n;i++){           //pehle sort kia he array ko
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    int count=1;
    for(int i=0;i<n;i++){
        int a=arr[i];        //then consecutive numbers ko find krne ki koshish ki he,if found count+=1
        int count1=1;
        for (int j=0;j<n;j++){
            if((arr[j]==(a+1))){
                count1+=1;
                a+=1;
            }
        }
        if(count<count1){
            count=count1;
        }
    }
    printf("%d",count);
}