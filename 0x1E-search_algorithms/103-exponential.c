#include "search_algos.h"



/**
 * _binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @left: Left element
 * @right: Right element
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{

	size_t i;

	if (array == NULL)
		return (-1);

	while (right > left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}



/**
 * exponential_search -  a function that searches for
 *  a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array to search in
 * @value: value to search for
 *Return: the index of the searched element
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right;

	if (array == NULL || size == 0)
		return (-1);
	
	while (i < size && array[i] <= value)
	{
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
