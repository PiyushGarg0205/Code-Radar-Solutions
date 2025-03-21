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
        int max = arr[i]; 
        int is_leader = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                is_leader = 0;
                break;
            }
        }
        if (is_leader) {
            maxarr[count++] = arr[i];
        }
    }
    for (int i = 0; i < count; i++) {
        printf("%d ", maxarr[i]);
    }

    return 0;
}
