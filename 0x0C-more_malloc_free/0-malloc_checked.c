#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - Entry point.
 * @b: value to be ch
 *
 * Return: 98 if error or a pointer on succssess.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
