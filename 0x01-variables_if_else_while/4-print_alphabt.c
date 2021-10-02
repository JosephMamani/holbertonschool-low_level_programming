#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase with exceptions 'q' and 'e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 113)
		{
			if (x != 101)
			{
				putchar(x);
			}
		}
	}
	putchar (10);
	return (0);
}
