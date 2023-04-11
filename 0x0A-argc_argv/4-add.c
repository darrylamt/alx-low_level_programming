#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_number - check if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int is_number(char *str) 
{
	unsigned int i;i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return 0;
		}
		i++;
	}
	return 1;
}

/**
 * main - entry point of the program
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[]) 
{
	int i;
	int num;
	int total = 0;
	i = 1;
	while (i < argc)
	{
		if (is_number(argv[i]))
		{
			num = atoi(argv[i]);
			total += num;
		}
		else
		{
			printf("Error\n");
			return 1;
		}
		i++;
	}
	printf("%d\n", total);
	return 0;
}
