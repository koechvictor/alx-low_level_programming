#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * Return: uppercase letters
 */

char *string_toupper(char *)
{
	int i = 0;

	for (*(a+i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			*(a + i) -= 32;
	}
	return (a);
}
