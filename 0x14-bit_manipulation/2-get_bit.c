#include "main.h"

/**
 * get_bit - a function that returns the
 * value of a bit at a given index.
 * @n: number to be found.
 * @index: index of the bit we want to get.
 * Return: the value of the bit at index
 * index or -1 if an error occured.
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	val = (n >> index) & 1;

	if (index > 63)
		return (-1);
	return (val);
}
