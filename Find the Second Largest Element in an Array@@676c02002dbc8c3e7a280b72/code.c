#include<stdio.h>
#include <limits.h>


int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        int smax = INT_MIN;
    }
    for(int i=0;i<N;i++){
            if(arr[i]!=max&&arr[i]>smax){
                smax=arr[i];
            }
        }
    printf("%d",smax);
}