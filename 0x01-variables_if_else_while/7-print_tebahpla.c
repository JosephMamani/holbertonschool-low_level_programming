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

	x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar (10);
	return (0);
}
