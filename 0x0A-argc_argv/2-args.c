#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @grc:argument count
 * @argv:array of pointers to arguments string
 * Return:0
 */

int main(int grc, char *argv[])
{
	int i;

	for (i = 0; i < grc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
