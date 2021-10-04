#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all numbers of base 16
 * Return: 0 (As always)
 */

int main(void)
{
	int x;

	int z;

	x = 48;

	z = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	while (z < 103)
	{
		putchar(z);
		z++;
	}

	putchar (10);
	return (0);
}
