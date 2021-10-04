#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar(10);
	return (0);
}
