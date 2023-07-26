#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a;
	int b;

	char i[] = "aAeEoOtTlL";
	char j[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[a] == i[b])
			{
				n[a] = j[b];
			}
		}
	}
	return (n);
}
