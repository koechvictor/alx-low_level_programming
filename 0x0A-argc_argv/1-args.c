#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argv - vector of C strings
 * @argc - the number of command line arguments.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);
	return (0);
}
