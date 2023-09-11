#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is where the execution of the program start
 * return: each time 0
 */
int main()
{
	int n;
	int u;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	u = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, u);
	if (u == 0)
		printf("Last digit of %d is %d and is o\n", n, u);
	if (n < 6 && u != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
	return (0);
}
