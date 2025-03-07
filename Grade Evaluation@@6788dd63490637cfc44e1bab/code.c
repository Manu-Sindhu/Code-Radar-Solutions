#include <stdio.h>
int main(){
    int a;
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Averaage");
        break;
        case 'F':
        printf("Fail");
        break;
    }
}