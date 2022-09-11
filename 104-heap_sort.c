#include "sort.h"

/**
 * merge - merge two sorted arrays
 * @array: first array
 * @temp: temporary array
 * @size: size of array
 */
void exchange(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * merge - merge two sorted arrays
 * @array: first array
 * @temp: temporary array
 * @size: size of array
 */
void sort(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

/**
 * merge - merge two sorted arrays
 * @array: first array
 * @temp: temporary array
 * @size: size of array
 */
void heapify(int *a, size_t b, size_t c)
{
    size_t largest = b;
    size_t left = 2 * b + 1;
    size_t right = 2 * b + 2;

    if (left < c && a[left] > a[largest])
        largest = left;

    if (right < c && a[right] > a[largest])
        largest = right;

    if (largest != b)
    {
        exchange(&a[b], &a[largest]);
        heapify(a, largest, c);
    }
}

/**
 * heap_sort - sort an array using heap sort
 * @array: array to sort
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	int xyz;
	size_t x = size;

	for (xyz = x / 2 - 1; xyz >= 0; xyz--)
	{
		heapify(array, x, xyz);
	}

	for (xyz = x - 1; xyz > 0; xyz--)
	{
		exchange(&array[0], &array[xyz]);
		x--;
		heapify(array, x, 0);
	}
}