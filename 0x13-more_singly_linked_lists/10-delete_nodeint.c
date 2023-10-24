#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: Each time 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempt = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tempt);
	return (1);
	}
	while (k < index - 1)
	{
	if (!tempt || !(tempt->next))
	return (-1);
	tempt = tempt->next;
	k++;
	}
	current = tempt->next;
	tempt->next = current->next;
	free(current);

	return (1);
}

