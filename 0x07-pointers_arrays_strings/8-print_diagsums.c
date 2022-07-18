#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * @a: square matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
		int lfrg = 0, rglf = size - 1;
		int valuelfrg = 0, valuerglf = 0;
		int *p = a;

		for (; lfrg <= size * size; lfrg += (size + 1), rglf += (size - 1))
		{
			valuelfrg += *(p + lfrg);
			valuerglf += *(p + rglf);
		}
		printf("%d, %d\n", valuelfrg, valuerglf);
}
