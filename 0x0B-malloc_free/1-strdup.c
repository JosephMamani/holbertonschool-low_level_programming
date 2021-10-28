#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *p;
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; *(str + i) != 0; i++)
	{}

	p = malloc(sizeof(*str) * i + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; *(str + i) != 0; i++)
		*(p + i) = *(str + i);

	*(p + i) = 0;
	return (p);
}

