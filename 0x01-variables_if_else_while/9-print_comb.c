#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the execution of the program start
 * return: each time 0 (success)
 */
int main(void)
{
        int i;
        for (i = '0'; i <= '9'; i++)
	{
        putchar(i);
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n'); 
        return (0);
}

