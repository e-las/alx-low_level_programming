#include "main.h"
/**
 * _isupper - program that checks for uppercase character
 * @c: variable text to be check
 * Return: each time 0 (Success)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
