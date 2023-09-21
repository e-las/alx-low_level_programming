#include "main.h"
/**
 * _strncpy - a program that copy a string
 * @dest: define the input value
 * @src: define the input value
 * @n: define the input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
