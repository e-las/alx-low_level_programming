#include "main.h"

/**
 * set_bit - program that sets bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: each time 1 (success), or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}

