#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: return the sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list numbers;

	if (n == 0)
		return (0);

	va_start(numbers, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
