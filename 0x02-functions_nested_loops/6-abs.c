#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer
 * @a: the int that is going to check
 * Return: the absolut value of a number
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (a * -1);
}
