#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: string to be printed.
 * @n: integers passed to the function.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed;
	int display;
	unsigned int i;

	va_start(printed, n);

	for (i = 0; i < n && separator != NULL; i++)
	{
		display = va_arg(printed, int);
		printf("%d", display);
	if (i < n - 1)
		printf("%s", separator);
	}

	va_end(printed);
	printf("\n");
}
