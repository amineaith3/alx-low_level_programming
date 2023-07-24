#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s : a string
 * Return : return 0
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	for (count; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
