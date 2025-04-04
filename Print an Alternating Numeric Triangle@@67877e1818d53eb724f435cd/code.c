#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        int start = (i % 2 == 0) ? 0 : 1; // Start with 1 for odd rows, 0 for even rows
        for (int j = 1; j <= i; j++) {  // Loop for columns
            printf("%d ", start);
            start = 1 - start; // Alternate between 1 and 0
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
