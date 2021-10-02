#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 * Return:0
 */

int main(void)
{
	int c;
	c = 97;
	while (c <= 122)
	{
		putchar (c);
		c++;
	};
	putchar (10);
	return (0);
}
