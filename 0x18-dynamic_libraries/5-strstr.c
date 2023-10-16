#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		int temp = a;

		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[temp] == needle[b])
				temp++;
			else
			{
				break;
			}
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (0);
}
