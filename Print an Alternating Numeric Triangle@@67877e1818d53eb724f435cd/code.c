#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read input
    
    for (int i = O; i <= n; i++) { // Loop for rows
        for (int j = 1; j <= i; j++) { // Loop for columns
            printf("%d ", (i + j) % 2); // Print 1 or 0 alternately
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
