#include "main.h"

/**
 * print_binary - a function that prints the
 * binary representation of a number.
 * @n: input number.
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int check;

	check = 1UL << ((sizeof(unsigned long int) * 8) - 1);

	while (check > 0)
	{
		if (n & check)
			_putchar('1');
		else
			_putchar('0');
		check = check >> 1;
	}
}
