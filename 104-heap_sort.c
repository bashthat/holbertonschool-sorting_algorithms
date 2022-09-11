#include "sort.h"
/**
 * sort - sorts an array of integers in ascending order
 * @a: array to sort
 * @b: size of array
 */


void sort(int *a, int b)
{
    int c, d, e, f;

    for (c = b / 2 - 1; c >= 0; c--)
        heapify(a, b, c);

    for (d = b - 1; d >= 0; d--)
    {
        exchange(&a[0], &a[d]);
        heapify(a, d, 0);
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
    int d = c;
    int e = 2 * c + 1;
    int f = 2 * c + 2;

    if (e < b && a[e] > a[d])
        d = e;

    if (f < b && a[f] > a[d])
        d = f;

    if (d != c)
    {
        exchange(&a[c], &a[d]);
        heapify(a, b, d);
    }
}

/**
 * heap_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of array
 */

void heap_sort(int *array, size_t size)
{
    int a, b, c, d, e, f;

    if (array == NULL || size < 2)
        return;

    sort(array, size);
    print_array(array, size);
}