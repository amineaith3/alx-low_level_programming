#include <stdio.h>

/**
 * main - print number of arguments passed
 * @argc : number of commandline args
 * @argv : pointer to an array of command line args
 * Return: 0-success, non-zero is fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc-1);
	return (0);
}
