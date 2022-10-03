#include "main.h"

/**
 * _abs - determine the absolute value of an integer
 * @i: variable to determine the absolute value of an integer
 * Return: i if succesful
 */

int _abs(int n)
{
	if (n < 0)
	n *= -1;

	return (n);
}
