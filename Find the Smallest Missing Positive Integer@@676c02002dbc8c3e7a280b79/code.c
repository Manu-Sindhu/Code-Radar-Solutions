#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;;i++){
        int found = 0;
        for(int j=0;j<N;j++){
            if(arr[j]==i){
                found = 1;
                break;
            }
        }
        if(!found){
            printf("%d",i)
        }
    }
        
    }


}