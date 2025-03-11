#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        print("%d\n",isprime(num));
    }
    return 0;
}