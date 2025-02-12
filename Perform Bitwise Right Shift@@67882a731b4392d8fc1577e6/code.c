#include <stdio.h>

int main() {
    int a,b;  
    scanf("%d %d", &a,&b);  // Take input from the user

    int result = a >> b;  // Left shift 'a' by 2 positions

    printf("%d", result);  // Print the result

    return 0;  
}

