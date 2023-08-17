#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that sums all
 * its parameters.
 * @n: number of parameters.
 * Return: 0 on faiure and sum on succssess.
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum = 0;

	va_start(num, n);

	if (n == 0)
		return (0);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);
	return (sum);
}
