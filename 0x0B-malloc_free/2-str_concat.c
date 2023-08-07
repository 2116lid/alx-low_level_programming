#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat value of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	unsigned int i;
	unsigned int j;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	j = strlen(s2);

	con = malloc((i + j + 1) * sizeof(char));

	if (con == NULL)
		return (NULL);
	for (k = 0; s1[k]; k++)
		con[k] = s1[k];
	strcat(con, s2);

	return (con);
}
