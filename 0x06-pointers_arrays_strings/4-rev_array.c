#include "main.h"
/**
 * reverse_array - a program that reverse array of integers
 * @a: define the array
 * @n: the number of elements of arrayy
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int m;
	int p;

	for (m = 0; m < n--; m++)
	{
		p = a[m];
		a[m] = a[n];
		a[n] = p;
	}
}
