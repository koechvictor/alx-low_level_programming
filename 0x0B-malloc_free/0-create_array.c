#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: specific char
 * Return: returns a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsingned int x;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
