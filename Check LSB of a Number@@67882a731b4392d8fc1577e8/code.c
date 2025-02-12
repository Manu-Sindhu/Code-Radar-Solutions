#include <stdio.h>

int main() {
    int num;

    // Take input from the user
   
    scanf("%d", &num);

    // Check LSB using bitwise AND with 1
    if (num & 1)
        printf("set);
    else
        printf("not set");

    return 0;
}
