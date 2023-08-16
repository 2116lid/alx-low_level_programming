#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that adds a and b.
 * @a: first number.
 * @b: second number.
 * Return: sum of a and b.
 *
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - function that subtracts a and b.
 * @a: first number.
 * @b: second number.
 * Return: difference of a and b.
 *
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies a and b.
 * @a: first number.
 * @b: second number.
 * Return: product of a and b.
 *
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides a and b.
 * @a: first number.
 * @b: second number.
 * Return: division of a and b.
 *
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
