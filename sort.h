#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Print Functions from holberton*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/* Task Functions */
void merge_sort(int *array, size_t size);
void merge(int *array, int *left, int *right, size_t size);
/* heap sort functions */
void heap_sort(int *array, size_t size);
void exchange(int *x, int *y);
void sort(int *a, int b);
void heapify(int *a, int b, int c);



#endif