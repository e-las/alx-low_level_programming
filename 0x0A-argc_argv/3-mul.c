#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int x, k, n, len, y, digit;

	x = 0;
	k = 0;
	n = 0;
	len = 0;
	y = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && y == 0)
	{
		if (s[x] == '-')
			++k;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
				if (k % 2)
				digit = -digit;
																		n = n * 10 + digit;
			y = 1;
			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			y = 0;
		}
		x++;
	}
	if (y == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

