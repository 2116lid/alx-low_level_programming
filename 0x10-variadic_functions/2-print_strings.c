#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *disp;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		disp = va_arg(print, char*);

		if (disp == NULL)
			printf("nil");
		printf("%s", disp);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(print);
	printf("\n");
}
