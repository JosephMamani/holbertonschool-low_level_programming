#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of numbers generated in variable n
 * Return:0
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("%d", m);
	if (m > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (m == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
