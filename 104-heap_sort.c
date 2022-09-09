#include "sort.h"
/**
 * heap_sort - sorts an array of integers in ascending order using the Heap sort
 * algorithm
 * @array: array to sort
 * @size: size of array
 */

void heap_sort(int *array, size_t size)
{
    size_t i;
    int tmp;

    if (array == NULL || size < 2)
        return;
    for (i = size / 2; i > 0; i--)
        heapify(array, size, i - 1, size);
    for (i = size - 1; i > 0; i--)
    {
        tmp = array[0];
        array[0] = array[i];
        array[i] = tmp;
        print_array(array, size);
        heapify(array, i, 0, size);
    }
}