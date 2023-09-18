#include "main.h"
/**
 * puts2 - A program that prints a function of every character of a string
 * starting with the first character followed by a new line
 * @str: input
 * Return; print
 */

void puts2(char *str)
{
	int longi = 0;
	int k = 0;
	char *x = str;
	int o;

	while (*x != '\0')
	{
		x++;
		longi++;
	}
	k = longi - 1;
	for (o = 0 ; o <= k ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
