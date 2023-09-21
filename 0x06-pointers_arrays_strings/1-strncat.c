#include "main.h"

/**
 * _strncat - a program that concatenate two stings
 * it will use at most n bytes from src
 * @dest: define the input value
 * @src: define the input value
 * @n: define the input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;

	while (y < n && src[y] != '\0')
	{
	dest[x] = src[y];
	x++;
	y++;
	}
	dest[x] = '\0';
	return (dest);
}

