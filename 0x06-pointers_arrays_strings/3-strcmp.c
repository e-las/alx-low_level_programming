#include "main.h"

/**
 * _strcmp - a program that compare string values
 * @s1: the input value
 * @s2: the input value
 * Return: s1[p] - s2[p]
 */
int _strcmp(char *s1, char *s2)
{
	int p;

	p = 0;
	while (s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
		{
			return (s1[p] - s2[p]);
		}
		p++;
	}
	return (0);
}

