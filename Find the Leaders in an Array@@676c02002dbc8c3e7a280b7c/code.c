#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1];
    int leaders[n], index = 0;
    leaders[index++] = max_from_right; // Store the rightmost leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[index++] = max_from_right;
        }
    }

    // Print leaders in the correct order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
