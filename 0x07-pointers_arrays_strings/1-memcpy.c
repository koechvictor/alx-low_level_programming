#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: number of bytes to copy
 * Returns: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
