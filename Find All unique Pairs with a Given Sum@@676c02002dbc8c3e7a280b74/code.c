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
        for(int j=i;j<N;j++){
            if(t == arr[i]+arr[j]&& i!=j){
                printf("%d %d",arr[i],arr[j]);
                return 0;
            }
        }
    }
}