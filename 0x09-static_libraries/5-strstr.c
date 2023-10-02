#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *y = needle;

		while (*k == *y && *y != '\0')
		{
			k++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}

