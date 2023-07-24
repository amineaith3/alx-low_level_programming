#include "main.h"
/**
 *swap_int - script to swap two ints through their pointers
 *@a : variable
 *@b : variable
 *return 0 : (success)
 */
void swap_int(int *a, int *b)
{
	int *c = *a;
	*a = *b;
	*b = *c;
}
