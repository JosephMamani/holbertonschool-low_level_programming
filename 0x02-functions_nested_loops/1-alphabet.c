#include "main.h"

/**
 * main - Prints the alphabet in lowercase
 * Return: Always 0 (Success)
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
