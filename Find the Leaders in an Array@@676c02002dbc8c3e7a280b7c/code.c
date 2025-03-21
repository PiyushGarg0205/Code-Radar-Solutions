#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Special case for single-element array
    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    int maxarr[n]; 
    for (int i = 0; i < n; i++) {
        maxarr[i] = 10000; // Initialize maxarr with a placeholder
    }

    int count = 0;

    // Find leaders in the array
    for (int i = 0; i < n; i++) {
        int max = arr[i]; // Assume the current element is the maximum
        int is_leader = 1;

        // Check if it's a leader by comparing to elements on its right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                is_leader = 0;
                break;
            }
        }

        // Add to maxarr if it's a leader
        if (is_leader) {
            maxarr[count++] = arr[i];
        }
    }

    // Print the leaders
    for (int i = 0; i < count; i++) {
        printf("%d ", maxarr[i]);
    }

    return 0;
}
