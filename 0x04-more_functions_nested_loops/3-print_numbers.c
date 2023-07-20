#include "main.h"

/**
 * print_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		_putchar(number + '0');
		number++;
	}
	_putchar('\n');
}
