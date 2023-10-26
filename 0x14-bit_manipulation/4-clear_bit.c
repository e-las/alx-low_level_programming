#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - program sets bit to 0 at a given index
 * @n: parameter
 * @index: index
 * Return: each time 1 (success), -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

