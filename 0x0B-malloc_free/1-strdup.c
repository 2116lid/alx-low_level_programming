#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: pointer or NULL.
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int i;
	int j;

	if (str == NULL)
		return (NULL);

	i = strlen(str);

	new = malloc((i + 1) * sizeof(char));

	if (new == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		new[j] = str[j];
	return (new);
}
