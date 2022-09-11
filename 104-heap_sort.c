#include "sort.h"
/**
 * sort - sorts an array of integers in ascending order
 * @a: array to sort
 * @b: size of array
 */


void sort(int *a, int b)
{
    int x, y;
    int z;

    for (x = 0; x < b; x++)
    {
        for (y = 0; y < b - x - 1; y++)
        {
            if (a[y] > a[y + 1])
            {
                exchange(&a[y], &a[y + 1]);
                print_array(a, b);
            }
        }
    }
        }



/**
 * exchange - exchanges two values
 * @x: first value
 * @y: second value
 */

void exchange(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

/**
 * heapify - heapifies an array
 * @a: array to heapify
 * @b: size of array
 * @c: index of array
 */

void heapify(int *a, int b, int c)
{
    size_t largest = c;
    size_t left = 2 * c + 1;
    size_t right = 2 * c + 2;

    if (left < b && a[left] > a[largest])
        largest = left;
    if (right < b && a[right] > a[largest])
        largest = right;
    if (largest != c)
    {
        exchange(&a[c], &a[largest]);
        print_array(a, b);
        heapify(a, b, largest);
    }
}
/**
 * heap_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void heap_sort(int *array, size_t size) {
    int z;
    size_t i = size;

    for (z = size / 2 - 1; z >= 0; z--)
    {
        heapify(array, size, z);
    }

    for (z = size - 1; z >= 0; z--)
    {
        exchange(&array[0], &array[z]);
        print_array(array, size);
        heapify(array, z, 0);
    }
}