#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: input number.
 *
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int check;

	for (i = 63; i >= 0; i--)
	{
		check = n >> i;

		if (check & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j != 0)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
