#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *luck = dest;

	for (; *luck != '\0'; luck++)
		;
		for (; *src != '\0'; src++)
		{
			if (n == 0)
			break;
			*luck = *src;
			luck++;
			n--;
		}
	return (dest);
}
