#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	int x;

	int y;

	x = 0;

	while (x < 10)
	{
		y = 97;

		while (y < 123)
		{
			_putchar (y);
			y++;
		}
		_putchar (10);
		x++;
	}
}
