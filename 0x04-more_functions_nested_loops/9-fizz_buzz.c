#include "main.h"
#include <stdio.h>
/**
 * main - program prints a Fizz Buzz
 * Return: each time 0 (success)
 */

int main(void)
{
int k;
for (k = 1; k <= 108; k++);
{
if ((k % 3 == 0) && ( k % 5 ==0))
printf("Fizz-Buzz");
}
else if (k % 3 == 0)
{
printf("Fizz");
}
else if (k % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", k);
}
if (k != 100)
{
printf(" ");
}
}
printf('\n');
return (0);
}
