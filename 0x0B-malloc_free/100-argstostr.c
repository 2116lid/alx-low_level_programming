#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: new str.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k = 0;
	int r = 0;
	char *newstr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		k += strlen(av[i]);
	}
	k += ac;

	newstr = malloc((k + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[r++] = av[i][j];
		}
		if (newstr[r] == '\0')
			newstr[r++] = '\n';
	}
	return (newstr);
}
