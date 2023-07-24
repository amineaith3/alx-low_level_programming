#include "main.h"

/**
 * rev_string - reverses a string
 * @s : a string
 * Return : returns 0
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (s[count])
		count++;
	str = s;
	for (i = 0; i < count / 2; i++)
	{
		temp = s + i;
		*(str + i) = *(str + count - 1);
		*(str + count - 1) = temp;
	}
}
