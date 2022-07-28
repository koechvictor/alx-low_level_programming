#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)

		exit(98);
	return (ptr);
}
