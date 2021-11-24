#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, sum;

	for (a = 1; a < 1024; a++)
	{
		sum = 0;

		if ((a % 3 == 0) || (a % 5 == 0))
			sum = sum + a;
	}
	printf("%d", sum);
	return (0);
}
