#include <unistd.h>
/**
 * _putchar - a program that writes the character c to stdout
 * @c: character to print
 * Return: each time 1 (success)
 * on error, -1 is returned and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
