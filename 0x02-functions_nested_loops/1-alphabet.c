#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 * main - uses built in functions
 * Return: 0 if successful
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
