#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[idx] = arr[i];
            idx++;
        }
    }
    for (int i = idx; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
