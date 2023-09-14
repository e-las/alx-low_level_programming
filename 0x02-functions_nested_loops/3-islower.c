#include "main.h"

/**
 * _islower - checks for lowercase character
 *@x: character to be checked
 * Return: 1 for lowercase 0 for otherwise
 */

int _islower(int x)
{
	if (x >= 97 && x <= 122)
	{
	return (1);
	}
	return (0);
}
