#include <stdio.h>
int main(){
    int num,isprime = 1;
    scanf("%d",&num);
    if(num<=1){
        isprime = 0;
    }
    else{
        for(int i = 2; i<=num /2;i++)
        if(num % i == 0){
            isprime == 0;
            break;
        }
    }
}
if(isprime){
    printf("Prime");
}
else{
    printf("Not Prime")
}