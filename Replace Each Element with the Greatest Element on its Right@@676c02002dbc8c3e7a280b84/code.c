#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int result[n];
    int stack[n], top = -1;  // Stack to store indices

    for (int i = n - 1; i >= 0; i--) {  // Traverse from right to left
        while (top >= 0 && arr[stack[top]] <= arr[i]) {
            top--;  // Pop elements smaller than current element
        }

        result[i] = (top == -1) ? -1 : arr[stack[top]]; // Assign next greater element
        stack[++top] = i;  // Push current index onto stack
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
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
