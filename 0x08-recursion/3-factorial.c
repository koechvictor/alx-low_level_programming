#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: number to get factorial of
 * return: factorial
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (1 * factorial(n - 1));
}
