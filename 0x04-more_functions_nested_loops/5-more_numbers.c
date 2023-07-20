#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i;
	int num;

	i = 0;

	while (i < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		i++;
		_putchar('\n');
	}
}
