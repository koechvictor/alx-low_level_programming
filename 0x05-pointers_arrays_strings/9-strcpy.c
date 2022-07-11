#include "main.h"

/**
 * *_strcpy - copy the string pointed by src, to the buffer pointed to by dest
 * @dest: char pointer
 * @src: char pointer 2
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int one, two;

	one = 0;
	while (src[one] != '\0')
	one++;
	for (two = 0; two <= one; two++)
	dest[two] = src[two];
	return (dest);
}
