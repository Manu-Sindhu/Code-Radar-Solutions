#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(t==arr[i]+arr[j]){
                printf("%d %d",i,j);
                return 0;
            }
        }
    }
}