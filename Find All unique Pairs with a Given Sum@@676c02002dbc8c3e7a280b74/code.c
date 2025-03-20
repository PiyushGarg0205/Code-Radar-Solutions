#include<stdio.h>
int main(){
    int n;
    scanf("%d,&n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        int pair[2];
        pair[0]=1000;
        for(int j=0;j<n;j++){
            if((arr[i]+arr[j])==num){
                pair[0]=arr[i];
                pair[1]=arr[j];
            }
        }
        if(pair[0]!=1000){
        for(int k=0;k<2;k++){
            printf("%d ",pair[k]);
        }
        }
    }
}