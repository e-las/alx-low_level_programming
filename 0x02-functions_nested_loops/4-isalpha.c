#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @k: character to be checked
 * Return: 1 for alphabet character 0 otherwise
 */
int _isalpha(int k)
{
if ((k >= 65 && k <= 97) || (k >= 97 && k <= 122))
{
return (1);
}
return (0);
}
