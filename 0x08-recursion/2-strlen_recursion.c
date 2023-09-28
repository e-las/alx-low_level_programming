#include "main.h"
/**
 * _strlen_recursion - a program that returns length of a string
 * @s: string to be computed
 * Return: lengtth of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s != '\0')
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
