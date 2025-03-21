#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1]; // Start with the rightmost element
    printf("%d ", max_from_right);  // The rightmost element is always a leader

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
    }

    return 0;
}
