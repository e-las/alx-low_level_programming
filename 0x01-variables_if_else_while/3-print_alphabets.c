#include <stdio.h>
/**
 * main - this is where the execution of the program starts
 * return: each time 0
 */
int main()
{
	char alphabets;
	
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
	
		putchar(alphabets);
	}

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
	
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
