#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that print the number of arguments
 * @argc:argument count
 * @argv:array of pointers to arguments strings
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			result = result * atoi(argv[i]);
			/* sum += atoi(argv[i]) */
		}
		printf("%d\n", result);
	}
	return (0);
}
