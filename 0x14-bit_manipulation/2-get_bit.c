#include"main.h"

/**
 * get_bit - program returns value of bit at index.
 * @n: number to check bits
 * @index: index at which check bit
 * Return: bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}

