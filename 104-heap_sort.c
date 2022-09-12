#include "sort.h"
/**
 * heap_sort - sorts an array of integers
 * @array: array to sort
 * @size: size of array
 */

void heap_sort(int *array, size_t size) {
size_t i, j, k, l;
int temp;
if (array == NULL || size < 2)
return;
for (i = size / 2; i > 0; i--) {
for (j = i; j <= size / 2;){
k = j * 2;
if (k < size && array[k - 1] < array[k])
k++;
if (array[j - 1] < array[k - 1]) {
temp = array[j - 1];
array[j - 1] = array[k - 1];
array[k - 1] = temp;
j = k;
}
else
break;
}}
for (l = size; l > 1; l--) {
temp = array[0];
array[0] = array[l - 1];
array[l - 1] = temp;
print_array(array, size);
for (j = 1; j <= l / 2;) {
k = j * 2;
if (k < l && array[k - 1] < array[k])
k++;
if (array[j - 1] < array[k - 1]) {
temp = array[j - 1];
array[j - 1] = array[k - 1];
array[k - 1] = temp;
j = k;
}
else
break;
}}}
