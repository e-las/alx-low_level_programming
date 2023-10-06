#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int k = 0, x = 0, leng1 = 0, leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;
	if (n < leng2)
		s = malloc(sizeof(char) * (leng1 + n + 1));
	else
		s = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (!s)
		return (NULL);
	while (k < leng1)
	{
		s[k] = s1[k];
		k++;
	}
	while (n < leng2 && k < (leng1 + n))
		s[k++] = s2[x++];
	while (n >= leng2 && k < (leng1 + leng2))
		s[k++] = s2[x++];
	s[k] = '\0';
	return (s);
}

