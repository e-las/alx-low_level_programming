#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - program that duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *eee;
	int k, p = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
		k++;
	eee = malloc(sizeof(char) * (k + 1));
	if (eee == NULL)
		return (NULL);
	for (p = 0; str[p]; p++)
		eee[p] = str[p];
	return (eee);
}

