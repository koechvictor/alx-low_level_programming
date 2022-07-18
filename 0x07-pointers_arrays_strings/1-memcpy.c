#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: start point of string to change
 * @src: memory area
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
