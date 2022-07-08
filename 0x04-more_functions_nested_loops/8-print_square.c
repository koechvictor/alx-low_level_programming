#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 *
 * Declaration: print the size of the square followed by a new line.
 */

void print_square(int size)
{
	int hgt;
	int wid;

	if (size > '0')
	{
	for (hgt = '0'; hgt < size; hgt++)
	{
	for (wid = 0; wid < size; wid++)
	_putchar('#');

	if (hgt == size - 1)
	continue;
	_putchar('\n');
	}
	}
	_putchar('\n');
}