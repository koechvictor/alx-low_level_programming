#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 *to flip to get from one number to another.
 *@n: first number
 *@m: second number
 * Return: number of flips to get from one number to the other
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int check;

	check = (n ^ m);
	while (check)
	{
		count += (check & 1);
		check >>= 1;
	}
	return (count);
}
