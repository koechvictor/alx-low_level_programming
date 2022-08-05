#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int length = *s;
	int middle = length / 2;
	int i;
	char temp;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
