#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * merge - merge two arrays
 * @array: array to sort
 * @size: size of array
 * @mid: middle of array
 * @temp: temp array
 */
 
void merge_sort(int *array, size_t size)
{
int *temp;
size_t i;
if (size < 2)
return;
temp = malloc(sizeof(int) * size);
if (temp == NULL)
return;
for (i = 0; i < size; i++)
temp[i] = array[i];
merge(array, temp, 0, size - 1);
free(temp);
}