#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - program prints diagonal line
 * @m: number of time the character printed
 */
void print_diagonal(int m)
{
int x, y;

if (m <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < m; x++)
{
for (y = 0; y < m; y++) 
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
