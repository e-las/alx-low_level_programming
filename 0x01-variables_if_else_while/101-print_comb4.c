#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the execution of the program start
 * return: each time 0 (success)
 */
int main(void)
{
        int i, x, y;

        for (i = '0'; i < '9'; i++)
        {
        for (x = i + 1; x <= '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
        {
        if ((x != i) !=y)
        putchar(i);
        putchar(x);
	putchar(y);
        {
        if (i == '8' && x == '9')
        continue;
        putchar(',');
        putchar(' ');
        }
        }
        }
	}
        putchar('\n');
        return (0);
}

