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

	int z;

	for (x = 48; x < 58; x++)
	{
		for (y = 49; y < 58; y++)
		{
			for (z = 50; z < 58; z++)
			{
				if (x < y && y < z)
				{
					putchar (x);
					putchar (y);
					putchar (z);
					if (x != 55 || y != 56 || z != 57)
					{
						putchar (44);
						putchar (32);
					}
				}
			}
		}
	}
	putchar (10);
	return (0);
}
