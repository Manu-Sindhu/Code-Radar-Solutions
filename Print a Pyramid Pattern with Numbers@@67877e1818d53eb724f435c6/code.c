#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=n-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}