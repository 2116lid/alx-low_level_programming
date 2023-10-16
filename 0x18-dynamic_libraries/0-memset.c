#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	while (n > 0)
	{
		s[a] = b;
		a++;
		n--;
	}
	return (s);
}
