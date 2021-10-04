#include <stdio.h>

/**
 * main - Sizes of types
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
char u[7] = "byte(s)";
	printf("%s %d %s\n", "Size of char:", sizeof(char), u);
	printf("%s %d %s\n", "Size of int:", sizeof(int), u);
	printf("%s %d %s\n", "Size of long int:", sizeof(long int), u);
	printf("%s %d %s\n", "Size of long long int:", sizeof(long long int), u);
	printf("%s %d %s\n", "Size of float:", sizeof(float), u);
	return (0);
}
