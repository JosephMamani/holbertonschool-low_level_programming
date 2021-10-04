#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints all combinations of numbers from 0 to 9
 * Return: 0 (As always)
 */

int main(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
		}

		if (x != 57)
		{
			putchar(32);
		}
		x++;
	}

	putchar (10);
	return (0);
}
