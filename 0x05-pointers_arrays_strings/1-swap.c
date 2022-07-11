#include "main.h"

/**
 * swap_int - swaps to value pointers
 * @a: first variable to swap
 * @b: second variable to swap
 */
void swap_int(int *a, int *b)
{
	int luck;

	luck = *a;
	*a = *b;
	*b = luck;
}
