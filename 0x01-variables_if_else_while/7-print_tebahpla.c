#include <stdio.h>
/**
 * main - This is where the execution of the program start
 * Return: each time 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);
	putchar('\n');
	return (0);
}
