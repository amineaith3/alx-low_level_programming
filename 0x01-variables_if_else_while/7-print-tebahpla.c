#include <stdio.h>

int main() {
    // Print the alphabet using putchar
    char c;
    for (c = 'z'; c >= 'a'; c--) {
        putchar(c);
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}

