#include <stdio.h>
int main(){
    int a;
    scanf("%c",&a);
    if(a== 'A' || a=='B' || a=='C' || a=='D' || a=='F'){
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
    else{
        printf("Invalid Input");

    }
}