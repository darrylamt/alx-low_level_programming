#include <stdlib.h>
#include <stdio.h>

/**
 * main - this is our main function for printing the name of the file
 * @argc: give the total index of the commands used at compilation
 * @argv: gives the exact commands used at compilation
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv[i]);
	}

	return (0);
}
