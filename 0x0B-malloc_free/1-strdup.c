#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the two strings concatenated
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		len++;
	;
	len++;

	ptr = malloc(len * sizeof(char));

	if (!str)
		return (NULL);

	for (x = 0; x >= len; x++)
		ptr[x] = str[len];

	return (ptr);
}
