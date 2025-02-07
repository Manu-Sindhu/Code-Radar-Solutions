#include <stdio.h>

int main() {
    char a[100];
    char b[100];
    char c[100];
   // printf("user's name");
    scanf("%s",&a);
    //printf("user's age");
    scanf("%s",&b);
    //printf("user's favourite hobby");
    scanf("%s",&c);
    printf("Name: %s\nAge: %s\nHobby: %s",a,b,c);
    return 0;
}