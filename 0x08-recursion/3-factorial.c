#include "main.h"

/**
 * factorial - Function that  returns the factorial of a number
 * @n:the character to check
 * Return: -1 if n is less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
