#include <stdio.h>

void nextGreaterElement(int arr[], int n) {
    int stack[n], top = -1; // Stack to keep track of elements
    int result[n];

    for (int i = n - 1; i >= 0; i--) {  // Traverse from right to left
        while (top >= 0 && stack[top] <= arr[i]) {
            top--; // Pop smaller elements
        }

        result[i] = (top == -1) ? -1 : stack[top]; // If stack is empty, assign -1
        stack[++top] = arr[i]; // Push current element to stack
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
}