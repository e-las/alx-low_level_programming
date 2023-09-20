#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: the printed character
 * Return: each time 1 (Success)
 * On error, -1 is returned and erro 0 is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
