#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0 && a<101){
        printf("In Range");
    }
    else if(a>100 || a<1){
        printf("Out of Range");
    }
    
}