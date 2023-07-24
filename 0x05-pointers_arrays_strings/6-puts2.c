#include "main.h"
/**
 * puts2 - function should print only one character out of two.
 * @str: input
 * Return - Nothing.
 */
void puts2(char *str)
{
	int i = 0;
	char *a = str;
	int b = 0;
	int c;

	while (*a != '\0')
	{
		a++;
		i++;
	}
	b = i - 1;

	for (c = 0; c <= b; c += 2)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
