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
 
 void merge(int *array, int *left, int *right, size_t size); {
 	int i = 0, j = 0, k = 0;
 	int n1 = mid - low + 1;
 	int n2 = high - mid;
 	int left[n1], right[n2];
 	for (i = 0; i < n1; i++)
 		left[i] = array[low + i];
 	for (j = 0; j < n2; j++)
 		right[j] = array[mid + 1 + j];
 	i = 0;
 	j = 0;
 	k = low;
 	while (i < n1 && j < n2) {
 		if (left[i] <= right[j]) {
 			array[k] = left[i];
 			i++;
 		} else {
 			array[k] = right[j];
 			j++;
 		}
 		k++;
 	}
 	while (i < n1) {
 		array[k] = left[i];
 		i++;
 		k++;
 	}
 	while (j < n2) {
 		array[k] = right[j];
 		j++;
 		k++;
 	}
 
 }