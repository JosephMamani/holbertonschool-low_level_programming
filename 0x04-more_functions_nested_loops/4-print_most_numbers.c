#include "main.h"

/**
 * print_most_numbers - Function that print numbers from 0 to 9
 * Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int x;

	x = 48;
	while (x < 58)
	{
		if (x != 50 && x != 52)
		{
			_putchar (x);
		}
		x++;
	}
	_putchar (10);
}
