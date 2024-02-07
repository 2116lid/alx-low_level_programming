#include "search_algos.h"

/**
  * new_binary_search - Searches for a value in a sorted array
  * of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @k: The starting index of the [sub]array to search.
  * @j: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the index where the value is located.
  */
int new_binary_search(int *array, size_t k, size_t j, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);

	while (j >= k)
	{
		printf("Searching in array: ");
		for (mid = k; mid < j; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = k + (j - k) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			j = mid - 1;
		else
			k = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: first index where value is located on succssess,
 * -1 on failure.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, j;

	if (array == NULL)
		return (-1);

	if (*array != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	j = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, j);
	return (new_binary_search(array, i / 2, j, value));
}
