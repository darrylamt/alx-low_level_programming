#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - calculates the minimum number of coins to make change
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 if successful, 1 if error
 */

int main(int argc, char *argv[])
{
	int amount, i, coins_count;
	int coins[] = {25, 10, 5, 2, 1}; /* an array of coin values */

	/* check that the program was called with exactly one argument */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]); /* convert the input string to an integer */

	coins_count = 0; /* count the number of coins used */

	/* loop through the coin values and calculate the minimum coins needed */
	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			coins_count++;
			amount -= coins[i];
		}
	}

	printf("%d\n", coins_count); /* print the minimum number of coins used */

	return (0);
}
