#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {  // Print stars
            printf("*");
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
