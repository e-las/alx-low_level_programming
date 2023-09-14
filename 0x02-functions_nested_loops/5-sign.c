#include "main.h"

/**
 * print_sign - prints the sign of a given number
 * @y: number to be checked
 * Return: 1 for positive number, -1 negative or 0 otherwise
 */
int print_sign(int y)
{
if (y > 0)
{
_putchar(43);
return (1);
}
else if (y < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}

