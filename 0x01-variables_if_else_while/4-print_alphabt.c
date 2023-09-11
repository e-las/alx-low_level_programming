#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is where your program execution start
 * return: each time 0
 */
int main()
{
	char alphabet, e, q;
	e = 'e';
	q = 'q';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	
	if (alphabet != e && alphabet != q)
	putchar(alphabet);

	putchar('\n');
	return (0);
}
