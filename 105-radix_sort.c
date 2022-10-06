#include "sort.h"
/**
 * radix_sort - sorts an array of integers in ascending order
 * using the Radix sort algorithm
 * @array : array to sort
 * @size_t size : size of the array
 */

void array(int *array, size_t size, int exp)
{
    int *output;
    int i;
    int count[10] = {0};

    output = malloc(sizeof(int) * size);
    if (output == NULL)
        return;
    for (i = 0; i < (int)size; i++)
        count[(array[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = (int)size - 1; i >= 0; i--)
    {
        output[count[(array[i] / exp) % 10] - 1] = array[i];
        count[(array[i] / exp) % 10]--;
    }
    for (i = 0; i < (int)size; i++)
        array[i] = output[i];
    free(output);
}


void radix_sort(int *array, size_t size)
{
    
    int max, exp;

    if (array == NULL || size < 2)
        return;
        max = array[0];
    for (int i = 1; i < (int)size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    for (exp = 1; max / exp > 0; exp *= 10)
    {
        
        print_array(array, size);
    }
}
