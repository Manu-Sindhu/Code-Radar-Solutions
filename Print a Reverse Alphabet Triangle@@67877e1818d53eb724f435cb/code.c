#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i++){
        for(char ch='A';ch<ch+i;ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
}