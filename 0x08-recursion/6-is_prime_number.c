#include "main.h"
/**
 * dividers_number - numbers of dividers
 * is_prime_number - give 1 if is a prime number
 * @n:the int to check
 * @c:counter
 * @i:initializer
 * Return: 1 if is prime, 0 if is not
 */

int dividers_number(int n, int c, int i)
{
	if (i > n)
		return (c);
	if (n % i == 0)
		return (dividers_number(n, c + 1, i + 1));
	return (dividers_number(n, c, i + 1));
}

int is_prime_number(int n)
{
	int c;

	if (n > 0)
	{
		c = dividers_number(n, 0, 1);
		if (c == 2)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
