#include "main.h"
#include <stdio.h>

/**
 * print_square - program square according to number of times
 * @size: number of square
 * Return: empty
 */
void print_square(int size)
{
	int z, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (z = '0'; z <= size; z++)
	{
	for (k = '0'; k < size; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

