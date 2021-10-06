#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 * @a: the int that is going to check
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int b;

	/*a = abs_(a); Funciona para llamar a la función del ejercicio*/
	/*anterior, pero no funciona por el checker*/
	b = a % 10;

	if (b >= 0)
	{
		_putchar ('0' + b);
		return (b);
	}

	else
	{
		_putchar ('0' + -b);
		return (-b);
	}
}
