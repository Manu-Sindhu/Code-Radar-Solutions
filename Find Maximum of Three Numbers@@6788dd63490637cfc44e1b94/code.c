#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("%d",a);
    }
    if(c>=b && c>=a){
        printf("%d",c);
    }
    else{
        printf("%d",b);
    }
    return 0;

}