#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char x;

	x = 97;

	while (x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar(10);
}
