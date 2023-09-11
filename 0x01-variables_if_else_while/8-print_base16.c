#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints numbers of base 16 in lowercase
 * Return: each time 0 (success)
 */
int main(void)
{
	int i;
	char alphabet;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
