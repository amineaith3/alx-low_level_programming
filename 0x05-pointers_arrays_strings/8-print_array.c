#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a specific number of elemens
 * @a : an array of int
 * @n : number of elemenets to print
 * returns 0 when success
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
