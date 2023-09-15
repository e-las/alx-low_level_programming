#include <stdio.h>
/**
 * print_line - program that draws a line in a terminal of a command line
 * @n: number of time printed
 */
void print_line(int n)
{
	int k;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (k = 0; k < n; k++)
	{
	putchar(95);
	}
	putchar('\n');
	}
}

