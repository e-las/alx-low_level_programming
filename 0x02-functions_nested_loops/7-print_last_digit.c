#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: number to be checked
 * Return: 1 for alphabet character 0 otherwise
 */

int print_last_digit(int x)
{
int lastdigit;
lastdigit = x % 10;
if (lastdigit < 0)
{
lastdigit = lastdigit * -1;
}
_putchar(lastdigit + '0');
return (lastdigit);

}
