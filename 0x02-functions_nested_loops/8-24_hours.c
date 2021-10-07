#include "main.h"

/**
 * jack_bauer - Function that prints every minute of the day
 */

void jack_bauer(void)
{
	int a, b;

	a = 0;

	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(58);
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar(10);
			b++;
		}
		a++;
	}
}
