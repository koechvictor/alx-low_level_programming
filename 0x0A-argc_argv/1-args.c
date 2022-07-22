#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of command line arguments.
 * @argv: vector of C stings
 * Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
