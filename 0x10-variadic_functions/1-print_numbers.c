#include "variadic_functions.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numb;

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));
		if (i + 1 != n && separator)
			printf("%s", separator);
	}
	va_end(numb);
	printf("\n");
}
