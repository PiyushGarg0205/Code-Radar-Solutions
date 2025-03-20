#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = 10000;
    int minimum[2];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Avoid duplicate and self-check
            int sub = arr[j] - arr[i];
            if (sub < 0) sub = -sub;

            if (sub < min) {
                min = sub;
                minimum[0] = arr[i];
                minimum[1] = arr[j];
            }
        }
    }

    // Print in sorted order
    if (minimum[0] > minimum[1]) {
        int temp = minimum[0];
        minimum[0] = minimum[1];
        minimum[1] = temp;
    }

    printf("%d %d", minimum[0], minimum[1]);
    return 0;
}
