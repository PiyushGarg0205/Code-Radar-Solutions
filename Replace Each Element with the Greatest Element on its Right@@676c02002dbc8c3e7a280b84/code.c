#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int maxRight = -1; // Variable to store the maximum element to the right

    for (int i = n - 1; i >= 0; i--) {  // Traverse from right to left
        int temp = arr[i];  // Store the current value before modifying it
        arr[i] = maxRight;  // Replace current element with maxRight
        if (temp > maxRight) {
            maxRight = temp;  // Update maxRight if needed
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    nextGreaterElement(arr, n);
    return 0;
}
