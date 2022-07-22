#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argv: vector of C strings
 * @argc: number of command line arguments.
 * Return: 0 if successful
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
