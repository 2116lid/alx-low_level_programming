#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num;
	int a;
	int accumulator;
	int coin_val[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	accumulator = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (a = 0; a < 5 && num >= 0; a++)
	{
		while (num >= coin_val[a])
		{
			accumulator++;
			num = num - coin_val[a];
		}
	}
	printf("%d\n", accumulator);

	return (0);
}
