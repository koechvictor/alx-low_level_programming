#include "main.h"

/**
 * print_array - prints elements of an array.
 * @a: variable 1 to be to be printed.
 * @n: variable 2 to be printed.
 */
void print_array(int *a, int n)
{
	int one;

	one = 0;

	while (one < n)
	{
		if (one != (n - 1))
			printf("%i, ", a[one]);
		else
			printf("%i", a[one]);
		one++;
	}
	printf("\n");
}
