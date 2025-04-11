#include<stdio.h>
void reverse(int arr[],int start,int end){
    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    k=k%N;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
    
}