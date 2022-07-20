#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: number to get a factorial of
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 1)
	return (1);
	else if (n < 0)
	return (-1);
	return (1 * factorial(n - 1));
}
