#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *@n: unsigned long int to change
 *@index: index to change to zero
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int luck;

	if (index > 63 || !n)
		return (-1);
	luck = 1 << index;
	*n = (*n & ~luck) | ((0 << index) & luck);
	return (1);
}
