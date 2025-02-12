#include <stdio.h>

int main() {
    float a, b, c;

    
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid: Sides must be positive.\n");
        return 0;
    }

    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}