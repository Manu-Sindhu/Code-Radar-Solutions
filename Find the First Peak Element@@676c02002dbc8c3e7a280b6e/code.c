#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Take input inside the same loop
    }

    for (int i = 0; i < N; i++) {
        if (i == 0 && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
        if (i == N - 1 && arr[i] > arr[i - 1]) {
            printf("%d", arr[i]);
            return 0;
        }
        if (i > 0 && i < N - 1 && arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // If no peak is found
    printf("-1");
    return 0;
}
