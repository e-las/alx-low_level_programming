#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is where the execution of the program start
 * return: each time 0 (success)
 */
int main(void)
{
        int i;
        char alphabet;
        for (i = '0'; i <= '9'; i++)
        putchar(i);
        for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
        putchar(alphabet);
        putchar('\n');
        return (0);
}
