#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half (Pyramid)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {  // Print stars
            printf("*");
        }
        printf("\n");
    }

    // Lower half (Inverted Pyramid)
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {  // Print spaces
            printf(" ");  // Fixed the typo here!
        }
        for (int k = 1; k <= 2 * i - 1; k++) {  // Print stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
