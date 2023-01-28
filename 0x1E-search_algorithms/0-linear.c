#include "search_algos.h"

/**
 * linear_search - function description
 * @array: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
