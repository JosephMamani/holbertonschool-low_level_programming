#include "main.h"

/**
 * more_numbers - Function that prints 10 times the numbers from 0 to 14
 */

void more_numbers(void)
{
	int l, n1, n2, d1, d2;

	l = 0;

	while (l < 10)
	{
		n1 = 0;
		while (n1 <= 14)
		{
			n2 = n1;
			if (n1 > 9)
			{
				d1 = n1 / 10;
				d2 = n1 % 10;
				n2 = d2;
			_putchar((d1) + 48);
			}
			_putchar((n2) + 48);
			n1++;
		}
		l++;
		_putchar(10);
	}
}
