#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elememt on a newline
 * @array: array
 * @size: the size of array
 * @action: pointer to the function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;

	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}

