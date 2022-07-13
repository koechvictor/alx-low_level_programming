#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: interger to be reversed
 * @n: number of elements of the array
 * Return: concatenated string
 */

void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end;
	int hold = 0;

	end = a + n - 1;
	for (; begin < end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
}
