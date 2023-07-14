#include <stdio.h>

int main() {
    // Print the alphabet using putchar
    char c;
    for (c = 'a'; c <= 'z'; c++) {
        putchar(c);
    }
    for (c='A'; c<='Z'; c++){
	    putchar(c);
    }
    // Print a new line using putchar
    putchar('\n');

    return 0;
}

