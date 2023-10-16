#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: a.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	int c;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				a++;
				break;
			} else if (accept[c + 1] == '\0')
			{
				return (a);
			}
		}
	}
	return (a);
}
