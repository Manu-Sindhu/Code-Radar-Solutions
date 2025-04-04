#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  
        // Printing spaces for center alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
