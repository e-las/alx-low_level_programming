#include "main.h"
/**
 * _puts_recursion - a program that call a function like puts();
 * @s: input
 * Return: each time 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
