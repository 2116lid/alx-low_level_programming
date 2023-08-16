#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array to be searched.
 * @size: number of elements in the array array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: i on succssess and -1 on failure.
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (size > 0 && cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
