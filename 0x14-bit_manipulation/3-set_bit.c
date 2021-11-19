#include "main.h"
/**
 * set_bit:set a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 if it works or -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n = (*n | (1 << index));
	return (1);
}
