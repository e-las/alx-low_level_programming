#include "main.h"
#include <stdio.h>
/**
 * more_numbers - program that prints number time 10
 * followed by a new line
 */
void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y < 15; y++)
{
if (y >= 10)
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
