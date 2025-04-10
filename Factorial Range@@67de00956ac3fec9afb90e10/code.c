#include<stdio.h>
int factorialRange(int a){
    if (a==0) return 1;
    return a*factorial(a-1);
}
