#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - program that checks for number digit
 *
 * Return: each time 0.
 */
void print_most_numbers(void)
{
int y;

for (y = 48; y < 58; y++)
{
if (y != 50)
{
if (y != 52)
{
_putchar(y);
}
}
}
_putchar('\n');
}
