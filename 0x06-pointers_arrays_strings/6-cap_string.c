#include "main.h"
/**
 * cap_string - a program that capitalizes all words of a string
 * @str: define the string to be capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if ((str[index - 1] == ' ' || str[index - 1] == '\t' ||
		    str[index - 1] == '\n' || str[index - 1] == ',' ||
		    str[index - 1] == ';' || str[index - 1] == '.' ||
		    str[index - 1] == '!' || str[index - 1] == '?' ||
		    str[index - 1] == '"' || str[index - 1] == '(' ||
		    str[index - 1] == ')' || str[index - 1] == '{' ||
		    str[index - 1] == '}'))
		{
			str[index] = str[index] - 32;
		}
	}
	
	return (str);
}
