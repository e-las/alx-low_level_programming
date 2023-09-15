#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - program prints diagonal line
 * @n: number of time the character printed
 */
void print_diagonal(int n)
{
	int p, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (p = 0; p < n; p++)
	{
	for (k = 0; k < p; k++)
	{	
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
