#include <stdio.h>
#include <string.h>

int main() {
    char c[50];
    scanf("%s", c);

    char x[50];
    int len = strlen(c);

    // Reverse the string manually
    for (int i = 0; i < len; i++) {
        x[i] = c[len - 1 - i];
    }
    x[len] = '\0'; // Null terminate the reversed string

    int cmp = strcmp(c, x);
    if (cmp == 0) {
        printf("YES\n"); // It's a palindrome
    } else {
        printf("NO\n");
    }

    return 0;
}
