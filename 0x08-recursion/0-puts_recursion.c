#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 * Return:
 */

void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		putchar(*s1);
		s1++;
		_puts_recursion(s1);
	}
	else
		_putchhar('\n');
}
