#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocated memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
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
