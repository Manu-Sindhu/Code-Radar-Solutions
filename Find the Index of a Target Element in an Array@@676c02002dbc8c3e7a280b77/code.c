#include<stdio.h>
int main(){
    int N;
    int k;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<N;i++){
        if(k==arr[i]){
            printf("%d",i);
        }
        break;
        
    }
}