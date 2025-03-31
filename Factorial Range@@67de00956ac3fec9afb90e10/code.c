#include<stdio.h>
int factorial(int a){
    if (a==0) return 1;
    return a*factorial(a-1);
}
int main(){
    int start,end;
    scanf("%d %d",&start,&end);
    for(int i=start;i<=end;i++){
    printf("%d\n",factorial(i));
}
}