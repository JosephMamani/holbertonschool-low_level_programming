#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = (get_op_func(argv[2]))(x, y);
	printf("%d\n", res);
	return (0);
}
