#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc:argument count
 * @argv:array of pointers to arguments strings
 * Return:Error if not received two arguments
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
