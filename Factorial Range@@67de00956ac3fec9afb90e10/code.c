#include<stdio.h>
int factorialRange(int a){
    int fact = 1;
    for(int i = 1;i<=a;i++){
        fact *= i;
    }
    return fact;
}
