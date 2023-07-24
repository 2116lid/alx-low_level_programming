#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return - Nothing.
 */
void puts_half(char *str)
{
	int i = 0;
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
		i++;
	b = (i + 1) / 2;

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
