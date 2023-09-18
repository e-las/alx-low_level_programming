#include "main.h"

/**
 * _atoi - a program that converts a string to an integer
 * @s: string to be converted
 * Return: int converted from the string
 */
int _atoi(char *s)
{
	int k, p, m, len, x, numbe;

	k = 0;
	p = 0;
	m = 0;
	x = 0;
	len = 0;
	numbe = 0;

	while (s[len] != '\0')
		len++;
	while (k < len && x == 0)
	{
		if (s[k] == '-')
			++p;
		if (s[k] >= '0' && s[k] <= '9')
		{
			numbe = s[k] - '0';
			if (p % 2)
				numbe = -numbe;
			m = m * 10 + numbe;
			x = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			x = 0;
		}
		k++;
	}
	if (x == 0)
		return (0);
	return (m);
}

