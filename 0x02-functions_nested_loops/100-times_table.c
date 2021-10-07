#include "main.h"

/**
 * print_times_table - Prints the n times table
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */

void print_times_table(int n)
{
	int x, y, res;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				res = x * y;
				_putchar(44);
				_putchar(32);
				if (res <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(res + 48);
				}
				else if (res <= 99)
				{
					_putchar(32);
					_putchar((res / 10) + 48);
					_putchar((res % 10) + 48);
				}
				else
				{
					_putchar(((res / 100) % 10) + 48);
					_putchar(((res / 10) % 10) + 48);
					_putchar((res % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
