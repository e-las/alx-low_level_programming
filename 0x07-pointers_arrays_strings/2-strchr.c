#include "main.h"
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: each time 0 (success)
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}

