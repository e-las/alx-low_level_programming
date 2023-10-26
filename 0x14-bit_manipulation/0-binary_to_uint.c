#include "main.h"

/**
 * binary_to_uint - a funct converts binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int numba;

	numba = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		numba <<= 1;
		if (b[k] == '1')
			numba += 1;
	}
	return (numba);
}
