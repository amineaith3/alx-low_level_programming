#include<stdio.h>

/*
 * linerar_search - function that searches for an element in an array
 * @array - argument of type pointer int
 * @size - argument of type size_t
 * @value - argument of type int
 * Return - the value if found, otherwise -1, null if array is  null
 */

int linear_search(int *array, size_t size, int value)
{
      int i = 0;
      while(i < size && array)
      {
	      printf("Value checked array[%d] = [%d]", i, *array);
	      if(*array == value)
	      {
		      printf("Found %d at index: %d", value, i);
		      return i;
		      }
	      i++;
	      array++;
      }
           if(!array)
  { 
    return -1;
  }
}
