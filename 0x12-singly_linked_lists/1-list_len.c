#include "lists.h"
#include <stdio.h>

/**
 * Developer: e-las
 * @list_len - prints the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
	k++;
	h = h->next;
	}
	return (k);
}