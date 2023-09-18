#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that generate random valid
 * passwords for the program 101-crackme
 * Return: each time 0
 */
int main(void)
{
	int pass[100];
	int k, sum, m;

	sum = 0;

	srand(time(NULL));

	for (k = 0; k < 100; k++)
	{
		pass[k] = rand() % 78;
		sum += (pass[k] + '0');
		putchar(pass[k] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			m = 2772 - sum - '0';
			sum += m;
			putchar(m + '0');
			break;
		}
	}
	return (0);
}
