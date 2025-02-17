#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a=='R'||a=='G'||a=='Y'){
    switch(a){
        case 'R':
        printf("Stop");
        break;
         case 'G':
        printf("Go");
        break;
         case 'Y':
        printf("Slow Down");
        break;
    }
    }
    else{
        printf("Invalid input");
    }
}