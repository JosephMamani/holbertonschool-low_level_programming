#include "main.h"

/**
 * puts2 - prints every character of string, starting with the first character
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int x, y;

	for (x = 0; str[x] != 0; x++)
	{}
	for (y = 0; y < x; y += 2)
		_putchar(str[y]);
	_putchar(10);
}
