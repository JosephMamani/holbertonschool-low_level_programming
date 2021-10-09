#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line
 * @n:the number of times the character should be printed
 */

void print_diagonal(int n)
{
	int x;

	int y;

	x = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			y = n - x;
			while (y < n)
			{
				_putchar(32);
				y++;
			}
			_putchar(92);
			x++;
			n--;
			_putchar(10);
		}
	}
	else
	_putchar(10);
}
