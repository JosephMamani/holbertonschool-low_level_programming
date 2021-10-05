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

	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			if (x < y)
			{
				putchar (x);
				putchar (y);
				if (x != 56 || y != 57)
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	putchar (10);
	return (0);
}
