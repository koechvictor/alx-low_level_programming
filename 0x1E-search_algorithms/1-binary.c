#include "search_algos.h"

/**
 * my_print - print an array
 * @array: parameter description
 * @size: parameter description
 */
void my_print(int *array, size_t size)
{
	unsigned int i = 0;

	if (!array)
		return;
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		if (i)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

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

/**
 * binary_search - function description
 * @array: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (bhelp(array, size, value, 0));
}
