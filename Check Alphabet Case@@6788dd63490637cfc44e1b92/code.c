#include <stdio.h>
int main() {
    char c;
    scnaf("%c",&c);
    if ('A'<=c<='Z'){
        printf("Uppercase");
    }
    else if ('a'<=c<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}