#include "search_algos.h"

/**
 * linear_search - a function that searches for a value using
 * Linear search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: the number of elements in the array.
 * @value: is the value to search for.
 *
 * Return: Value on succssess, -1 on failure.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]", i, array[i]);
			printf("\n");
		}
	}
	return (-1);
}
