#include "main.h"
/**
 * leet - a program that encode inot 1337 speak
 * @n: define the input value
 * Return: n value
 */
char *leet(char *n)
{
	int x, y;
	char s1[] = "aAeEoOtTIL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (n[x] == s1[y])
			{
				n[x] = s2[y];
			}
		}
	}
	return (n);
}

