#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempt = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	while (tempt->next)
	tempt = tempt->next;
	tempt->next = new;

	return (new);
}
