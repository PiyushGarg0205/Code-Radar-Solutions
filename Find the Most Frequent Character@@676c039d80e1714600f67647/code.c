#include <stdio.h>
#include <string.h>

int main() {
    char c[50];
    fgets(c, sizeof(c), stdin);

    // Remove newline character if present
    size_t len = strlen(c);
    if (c[len - 1] == '\n') {
        c[len - 1] = '\0';
        len--;
    }

    int maxcount = 0;
    char x = '~'; // '~' is high in ASCII; ensures lexicographical comparison

    for (int i = 0; i < len; i++) {
        int count = 1;
        for (int j = 0; j < len; j++) {
            if (i != j && c[i] == c[j]) {
                count++;
            }
        }

        if (count > maxcount) {
            maxcount = count;
            x = c[i];
        } else if (count == maxcount) {
            if (c[i] < x) {
                x = c[i];
            }
        }
    }

    // If all characters are unique
    if (maxcount == 1) {
        printf("%c", c[len - 1]);
    } else {
        printf("%c", x);
    }

    return 0;
}
