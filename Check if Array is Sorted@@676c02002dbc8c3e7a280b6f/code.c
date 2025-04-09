#include<stio.h>
int main(){
    int N,issorted=1;
    int arr[N];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        if(arr[i]>arr[i+1]){
            issorted=0;
            break;
        }
        if(issorted){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
    }
}