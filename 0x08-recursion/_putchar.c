#include "main.h"
#include <unistd.h>

/**
 * _putchar - a program that writes the character c to stdout
 * @c: the character to print
 * Return: each time 1 (success)
 * On error, -1 returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
