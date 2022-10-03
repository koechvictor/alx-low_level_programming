#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: size difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int luck = 0;

	while (*(s1 + luck) != '\0' || *(s2 + luck) != '\0')
	{
		if (*(s1 + luck) != *(s2 + luck))
			return (*(s1 + luck) - *(s2 + luck));
		luck++;
	}
	return (0);
}


