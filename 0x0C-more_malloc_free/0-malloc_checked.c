#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to be allocate
 * Return:a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b);
	
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}