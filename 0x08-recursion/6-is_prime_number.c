#include "main.h"

/**
 * is_prime_number: returns 1 if the input integer is a prime number
 * dividers_number: function to find the numbers of dividers
 * @n:the int to check
 * @c:counter
 * @i:initializer 
 * Return: 1 if c is lowercase, 0 otherwise
 */

int dividers_number (int n, int c, int i)
{
	if (i > n)
		return (c);
	if (n % i == 0)
		return (dividers_number(n, c + 1, i + 1));
	return (dividers_number (n, c, i + 1));
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
