#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(c>a && c>b){
    if(a*a + b*b == c*c){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
    }
    if(b>a && b>c){
    if(a*a + c*c == b*b){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
    }
    if(a>b && a>c){
    if(b*b + c*c == a*a){
        printf("valid");
    }
    else{
        printf("Invalid");
    }
    }

    return 0;
}