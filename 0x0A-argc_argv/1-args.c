#include <stdio.h>
/**
 * main - program that print the number of arguments
 * @argc:argument count
 * @argv:array of pointers to arguments strings
 * Return:0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
