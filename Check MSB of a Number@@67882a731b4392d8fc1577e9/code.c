#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    
    if (num & (1 << 31))
        printf("MSB is set (1)\n");
    else
        printf("MSB is not set (0)\n");

    return 0;
}

