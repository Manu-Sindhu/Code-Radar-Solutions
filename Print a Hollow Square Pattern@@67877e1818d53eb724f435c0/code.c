#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {  // Loop for rows
        for (int j = 1; j <= N; j++) {  // Loop for columns
            if (i == 1 || i == N || j == 1 || j == N) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");  // Move to the next row *after* the inner loop completes
    }

    return 0;
}
