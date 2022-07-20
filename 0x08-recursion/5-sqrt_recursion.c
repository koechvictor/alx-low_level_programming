#include "main.h"

/**
 * help - helps sqrt function find sqrt
 * @y: needs to be sqrt
 * @x: sqrt of n
 * Return:nutural sqrt of n
 */

int help(int y, int x)
{
	if (x * x == n)
		return (x);
	else if  (x * x < n)
		return (help(n, x++));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: nutural sqrt
 */

int _sqrt_recursion(int n)
{
	return (help(n, x++));
}
