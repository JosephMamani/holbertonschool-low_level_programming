#include "main.h"

/**
 * print_line - Function that checks a lowercase character
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar (95);
		n--;
	}
	_putchar(10);
}
