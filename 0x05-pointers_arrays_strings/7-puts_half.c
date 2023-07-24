include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str : a string
 * returns 0 when success
 */

void puts_half(char *str)
{
	int count = 0, i = 0, half;

	while (str[count])
		count++;
	half = count / 2;

	for (i = half; i < count ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
