#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int num;
    scanf("%d",&num);
    int pair[2];
    for(int i=0;i<n;i++){
        pair[0]=1000;
        for(int j=0;j<n;j++){
            if(((arr[i]+arr[j])==num)&&(i!=j)){
                if(pair[0]!=arr[i]){
                pair[0]=arr[i];
                pair[1]=arr[j];}
                arr[i]=100000;
                arr[j]=100000;
                break;
            }
        }
        if(pair[0]!=1000){
        printf("%d ",pair[0]);
        printf("%d\n",pair[1]);
        }
    }
}