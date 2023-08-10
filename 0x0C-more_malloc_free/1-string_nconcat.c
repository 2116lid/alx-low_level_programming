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
	unsigned int k, l;
	char *str;

	k = strlen(s1);
	l = strlen(s2);

	if (n < l)
	{
		str = malloc((k + n + 1) * sizeof(char));
	} else
		str =  malloc(sizeof(char) * (k + l + 1));

	if (str == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(str, s1);
	else
		*str = '\0';
	strncat(str, s2, n);

	return(str);
}
