#include "main.h"

/**
 * _memset - to fill memo with a specific value.
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > a; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
