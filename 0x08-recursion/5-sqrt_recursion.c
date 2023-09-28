#include "main.h"

int origi_sqrt_recursion(int n, int x);
/**
 * _sqrt_recursion - a program returns a natural square root of a number
 * @n: number to compute
 * Return: resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (origi_sqrt_recursion(n, 0));
}

/**
 * origi_sqrt_recursion - recurses to find natural
 * square root of a number
 * @n: number to calculate the square root
 * @x: iterator
 * Retturn: resulting square root
 */

int origi_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (origi_sqrt_recursion(n, x + 1));

}
