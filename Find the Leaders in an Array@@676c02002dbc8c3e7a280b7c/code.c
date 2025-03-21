#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (n == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    int maxarr[n];
    for (int i = 0; i < n; i++) {
        maxarr[i] = 10000;
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int max = 0;
        int x = 1;

        if (i != n - 1) {
            for (int j = i; j < n; j++) {
                if (max < arr[j]) {
                    max = arr[j];
                    for (int k = 0; k < count; k++) {
                        if (maxarr[k] == max) {
                            x = 0;
                            break;
                        }
                    }

                    if (x == 1) {
                        maxarr[count++] = max;
                    }
                }
            }
        }
    }
    for (int i = 0; i < count; i++) { 
        if (maxarr[i] != 10000) {
            printf("%d ", maxarr[i]);
        }
    }

    return 0;
}
