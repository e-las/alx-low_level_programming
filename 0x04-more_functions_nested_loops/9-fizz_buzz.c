#include <stdio.h>
/**
 *  * main - this is where the execution of the program start
 *   * return: each time 0 (success)
 *    */
int main(void)
{
int k;
for (k = 1; k <= 108; k++);
{
if ((k % 3 == 0) && ( k % 5 ==0))
printf("Fizz-Buzz");
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
putchar('\n');
return (0);
}
