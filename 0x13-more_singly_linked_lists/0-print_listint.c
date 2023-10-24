#include "lists.h"
/**
 * print_listint - function that prints all elements of listed list
 * @h: linked list of type listint_t to print
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t numba = 0;

while (h)
{
	printf("%d\n", h->n);
	numba++;
	h = h->next;
}
return (numba);
}

