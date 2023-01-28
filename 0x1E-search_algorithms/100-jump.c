#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algorithm
 * @array: parameter description
 * @size: parameter description
 * @value: parameter description
 * Return: return description
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int m;
	unsigned int sect;
	unsigned int esect;
	unsigned int j;

	if (!array)
		return (-1);

	m = (int)sqrt(size);
	sect = 0;
	esect = 0;

	while (esect < size && array[esect] < value)
	{
		printf("Value checked array[%d] = [%d]\n", esect, array[esect]);
		sect = sect + 1;
		esect = sect * m;
	}
	printf("Value found between indexes [%d] and [%d]\n", esect - m, esect);

	j = esect - m;
	while (j < size && j <= esect)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
