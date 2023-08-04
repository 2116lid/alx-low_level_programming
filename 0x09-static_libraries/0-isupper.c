#include "main.h"

/**
 * _isupper - checks if a char is uppercase or not.
 * @c: char to be checked.
 *
 * Return:0 or 1(Sucssess) .
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
