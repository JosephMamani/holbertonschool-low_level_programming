#include "main.h"
/**
 * clear_bit - sets a bit at a given index to 0
 * @n: pointer to the number to change
 * @index: index of the bit to set to 0
 * Return: 1 if it works or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_index = (sizeof(unsigned long int) * 8);

	if (index >= max_index)
		return (-1);

	mask = mask << index;
	mask = ~(mask);
	*n = *n & mask;
	return (1);
}
