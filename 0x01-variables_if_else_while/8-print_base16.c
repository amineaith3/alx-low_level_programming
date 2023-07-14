#include <stdio.h>

int main(void)
{
	char hexDigits[] = "0123456789abcdef"; // Array of hexadecimal digits

	// Print the numbers of base 16 in lowercase using putchar
	for (int i = 0; i < 16; i++)
	{
		putchar(hexDigits[i]);
	}

	// Print a new line using putchar
	putchar('\n');

	return 0;
}

