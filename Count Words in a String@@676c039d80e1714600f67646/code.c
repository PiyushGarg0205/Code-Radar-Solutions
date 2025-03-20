#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    fgets(c, sizeof(c), stdin);

    int len = strlen(c);
    int count = 0;
    int inword = 0;

    for (int i = 0; i < len; i++) {
        if ((c[i] != ' ') && (c[i] != '\n') && (inword == 0)) {
            count++;
            inword = 1;
        } else if (c[i] == ' ' || c[i] == '\n') {
            inword = 0;
        }
    }

    printf("%d", count);
    return 0;
}
