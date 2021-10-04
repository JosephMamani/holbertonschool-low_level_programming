#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);
		x++;
	}
	printf("\n");
	return (0);
}
