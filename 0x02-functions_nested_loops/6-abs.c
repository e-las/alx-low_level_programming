#include "main.h"

/**
 * _abs - checks for absolute 
 * @a: character to be checked
 * Return: absolute value or zero
 */

int _abs(int a)
{
if (a < 0)
{
int abs_valu;
abs_valu =  a * -1;
return (abs_valu);
}
return (a);
}
