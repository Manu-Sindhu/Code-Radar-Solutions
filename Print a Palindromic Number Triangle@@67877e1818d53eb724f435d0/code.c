#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int s = 0; s < N - i; s++) {
            printf("  ");
        }
        // Print increasing numbers from 1 to i
        printf("%d ", 1);
        for (int j = 2; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers from i-1 to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}