#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: each time 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
