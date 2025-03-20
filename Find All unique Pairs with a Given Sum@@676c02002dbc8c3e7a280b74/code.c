#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int num;
    scanf("%d", &num);

    for(int i = 0; i < n; i++) {
        if(arr[i] == 100000) continue;  // Skip already used element

        for(int j = i + 1; j < n; j++) {
            if(arr[j] == 100000) continue;  // Skip already used element

            if(arr[i] + arr[j] == num) {
                printf("%d %d\n", arr[i], arr[j]);

                // Mark both as used
                arr[i] = 100000;
                arr[j] = 100000;
                break;  // Move to next i
            }
        }
    }

    return 0;
}
