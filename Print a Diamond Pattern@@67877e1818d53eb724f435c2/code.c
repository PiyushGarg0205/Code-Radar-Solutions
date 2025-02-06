#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);

    for (i = 1; i > 0; ) {  // Stop when i reaches 0
        // Print leading spaces
        for (j = 1; j <= abs(n - i); j++) {
            printf(" ");
        }
        
        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        
        printf("\n");  // Move to next line
        
        // Increase i until it reaches n, then start decreasing
        if (i < n) {
            i++;
        } else {
            i--;
        }
    }

    return 0;
}
