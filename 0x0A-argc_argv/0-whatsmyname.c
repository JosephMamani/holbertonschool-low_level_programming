#include <stdio.h>
/**
 * main -  writes its name
 * @argc: argument count
 * @argv: array of pointers to argument strings
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);
	return (0);
}
