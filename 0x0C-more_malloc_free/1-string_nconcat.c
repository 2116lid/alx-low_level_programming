#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - Entry point.
 * @s1: string number one.
 * @s2: string number two.
 * @n:first bytes of s2.
 *
 * Return: a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l;
	char *str;

	if (s1 != NULL)
		k = strlen(s1);
	if (s2 != NULL)
		l = strlen(s2);
	if (n < l)
		str = malloc(sizeof(char) * (k + n + 1));
	else
		str = malloc(sizeof(char) * (k + l + 1));
	if (!str)
		return (NULL);
	while (i < k)
	{
		strcpy(str, s1);
		i++;
	}
	while (n < l && i < (k + n))
		str[i++] = s2[j++];
	while (n >= l && i < (k + l))
		str[i++] = s2[j++];
	str[i] = '\0';

	return (str);
}
