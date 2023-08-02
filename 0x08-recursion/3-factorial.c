#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of integer n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
