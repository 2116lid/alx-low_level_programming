#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1.
 * Return: the converted number, or 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			decimal = decimal << 1;
		else if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else
			return (0);
	}
	return (decimal);
}
