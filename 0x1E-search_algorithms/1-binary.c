#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a sorted array
 * of integers using the Binary search algorithm.
 * @*array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located on succssess,
 * -1 on failure.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t j;
	size_t mid;

	if (array == NULL)
		return (-1);

	for (i = 0, j = size - 1; j >= i;)
	{
		printf("Searching in array: ");
		for (mid = i; mid < j; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = i + (j - i) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
                        j = mid - 1;
		}
		else
		{
                        i = mid + 1;
		}
	}
	return (-1);
}
