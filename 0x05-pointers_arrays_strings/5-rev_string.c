#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int a = 0;
	int b = length - 1;

	while (a < b)
	{
		char temp = s[a];

		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
