#include <stdio.h>

int main() {
    // Print the numbers using putchar
   int n;
    for (n = 0; n <= 9; n++) {
        putchar(n);
	if (n<9){
		putchar(',');
		putchar(' ');
	}
    }

    // Print a new line using putchar
    putchar('\n');

    return 0;
}

