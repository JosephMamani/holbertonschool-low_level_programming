#include "main.h"

/**
 * print_numbers - Function that prints the numbers from 0 to 9
 * followed by a new line
 */

void print_numbers(void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		_putchar (a);
		a++;
	}
	_putchar (10);
}
