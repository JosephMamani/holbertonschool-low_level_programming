#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *pt;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		pt = va_arg(strings, char *);
		if (pt == NULL)
			printf("(nil)");
		else
			printf("%s", pt);
		if (i + 1 != n && separator)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
