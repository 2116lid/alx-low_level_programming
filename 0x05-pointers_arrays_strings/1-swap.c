#include "main.h"
/**
 * swap_int - swapsthe value of two integers.
 * @a: first number to be swaped.
 * @b: second number to be swaped.
 * Return - Nothing.
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
