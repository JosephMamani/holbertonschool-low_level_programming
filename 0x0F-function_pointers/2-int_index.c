#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return:first element index
 * or -1 if no match is found or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (((*cmp)(array[i])) == 1)
			return (i);
	}
	return (-1);
}
