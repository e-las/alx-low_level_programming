#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int x;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
	dest[k] = src[x];
	k++;
	x++;
	}
	dest[k] = '\0';
	return (dest);
}

