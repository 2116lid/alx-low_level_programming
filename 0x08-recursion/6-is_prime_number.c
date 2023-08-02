#include "main.h"

int true_prime(int n, int a);
int is_prime_number(int n);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	int a = 1;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (true_prime(n, n - a));
}

/**
 * true_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int true_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 1)
		return (0);
	return (true_prime(n, a - 1));
}
