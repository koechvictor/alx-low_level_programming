#include "search_algos.h"

/**
 * bhelp - binary search recursive helper
 * @array: the array
 * @size: the size
 * @value: the value to find
 * @acc: the indices before the current array
 * Return: the index of the sought value
 */
int bhelp(int *array, size_t size, int value, int acc)
{
	unsigned int mid;

	my_print(array, size);
	if (size == 1)
	{
		if (array[0] == value)
			return (acc);
		else
			return (-1);
	}

	if (size % 2 == 0)
		mid = (size / 2) - 1;
	else
		mid = (size / 2);
	if (array[mid] == value)
		return (acc + mid);
	if (array[mid] > value)
		return (bhelp(array, mid, value, acc));
	return (bhelp(array + mid + 1, size - mid - 1, value, acc + mid + 1));
}

