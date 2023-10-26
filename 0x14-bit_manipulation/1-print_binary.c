#include "main.h"

/**
 * _pow - function calculates base to power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value of base to power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numba;
	unsigned int k;

	numba = 1;
	for (k = 1; k <= power; k++)
	numba *= base;
	return (numba);
}

/**
 * print_binary - prints a number in binary form
 * @n: number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

