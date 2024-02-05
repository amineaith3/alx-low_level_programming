#include<stdio.h>

int linear_search(int *array, size_t size, int value){
  int i = 0;
  while(i < size && array){
  printf("Value checked array[%d] = [%d]", i, *array);
    if( *array == value){
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
