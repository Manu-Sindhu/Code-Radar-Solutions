#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if((a%4 && a%100)||(a%400)){
    printf("Leap Year");
    }
    else{
        printf("Not a leap Year");
    }
    return 0;
}