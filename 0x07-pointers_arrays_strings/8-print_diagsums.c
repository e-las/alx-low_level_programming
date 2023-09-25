#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int Firstsum, Secoundsum, x;

	Firstsum = 0;
	Secoundsum = 0;

	for (x = 0; x < size; x++)
	{
		Firstsum = Firstsum + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		Secoundsum += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", Firstsum, Secoundsum);
}

