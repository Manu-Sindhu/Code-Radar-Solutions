#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int s = 1; s <= N - i; s++) {
            printf(" ");
        }

        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // Move to next row
    }

    return 0;
}
