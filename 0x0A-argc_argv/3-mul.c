#include <stdio.h>

/**
 * main - print prod of 2 nums
 * @argc: int
 * @argv: list
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
