#include "main.h"
/**
 * print_triangle - a program that print a triangle of square
 * @size: size of the triangle
 * Return: empty
 */
void print_triangle(int size)
{
	int i, p, k;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (p = size - i; p > 1; p--)
	{
	_putchar(32);
	}
	for (k = 0; k <= i; k++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
