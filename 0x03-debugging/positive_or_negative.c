#include "main.h"
/**
 * positive_or_negative - checks if a number is 0 or other.
 * 0 : is number to be checked.
 * @i: is the function parameter.
 * Return - 0 on sucssess.
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	return;
}
