#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: memory area to copy
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = 0;

	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return (dest);
}
