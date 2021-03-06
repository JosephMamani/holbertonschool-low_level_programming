#include "main.h"
/**
 * _pow_recursion - function that return the value
 * of x raised to the power of y
 *
 * @x: parameter to base
 * @y: parameter of pow
 *
 * Return: result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
