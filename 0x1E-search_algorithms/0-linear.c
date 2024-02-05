#include<stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linerar_search - function that searches for an element in an array
 * @array: argument of type pointer int
 * @size: argument of type size_t
 * @value: argument of type int
 * Return: the value if found, otherwise -1, null if array is  null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
