#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * Developer:e-las
 * add_node - a program adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = len;

	new->next = *head;
	*head = new;

	return (*head);
}

