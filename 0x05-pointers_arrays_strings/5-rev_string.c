#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to br reversed
 */
void print_rev(char *s)
{
	int one, two, three;
	char rev;
	 
	one = 0;

	while (s[one] != '\0')
		one++;

	one--;
	for (two = 0; two <= one / 2; two++)
	{
		rev = s(one);
		three = s(one - two);
		s(two) = three;
		s(one - two) = rev;
	}
}
