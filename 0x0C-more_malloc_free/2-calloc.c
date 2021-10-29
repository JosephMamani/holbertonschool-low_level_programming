#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocate memory for an array using malloc
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
	{
		*(mem + x) = 0;
	}
	return (mem);
}
