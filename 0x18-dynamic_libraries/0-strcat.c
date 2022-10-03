#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *luck = dest;

	for (; *luck != '\0'; luck++)
		;
		for (; *src != '\0'; src++)
		{
			*luck = *src;
			luck++;
		}
	*luck = *src;
	return (dest);
}
