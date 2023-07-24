#include "main.h"

/**
 * print_array - prints a specific number of elemens
 * @a : an array of int
 * @n : number of elemenets to print
 * returns 0 when success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
