#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: first string to copy
 * @src: second string to copy
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *luck = dest;

	for (;n != 0 && *src != '\0'; n--, src++)
	{
		*luck = *src;
		luck++;
	}
	for (;n != 0 && *src != '\0'; n--, luck++)
	luck = '\0';

	return (dest);
}
