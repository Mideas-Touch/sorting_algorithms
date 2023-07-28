#ifndef SORT_H
#define SORT_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void quick_sort_rec(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void swapem(listint_t *l, listint_t *r, listint_t **h);
void counting_sort(int *array, size_t size);
int get_max(int *array, int size);
int findmax(int *array, size_t size);
int count(int *array, size_t size, int val);
void counting_sort(int *array, size_t size);

#endif
