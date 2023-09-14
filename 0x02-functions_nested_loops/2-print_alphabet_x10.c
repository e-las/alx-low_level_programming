#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabet x100 times
 * Return: void
 */

void print_alphabet_x10(void)
{
char m;
int x;
x = 0;
while (x < 10)
{
for (m = 'a'; m <= 'z'; m++)
_putchar(m);
_putchar('\n');
x++;
}
}
