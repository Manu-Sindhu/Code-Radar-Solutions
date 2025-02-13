#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c){
        printf("Equilateral");
        break
    }
    else if(a==b!=c||a!=b==c||a!=c==b){
        printf("Isosceles");
        break
    }
    else{
        printf("Scalene");
        break
    }
    return 0;
}