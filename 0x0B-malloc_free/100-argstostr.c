#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int k, m, y = 0, i = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (m = 0; av[k][m]; m++)
			i++;
	}
	i += ac;
	str = malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
	for (m = 0; av[k][m]; m++)
	{
		str[y] = av[k][m];
		y++;
	}
	if (str[y] == '\0')
	{
		str[y++] = '\n';
	}
	}
	return (str);
}

