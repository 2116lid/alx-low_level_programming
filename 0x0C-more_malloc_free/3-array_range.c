#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int i;
	int total_size;
	int *ptr;

	if (min > max)
		return (NULL);

	total_size = ((max - min) + 1);

	ptr = malloc(total_size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
