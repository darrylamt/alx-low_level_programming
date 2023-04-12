#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _create_array - creates an array of characters
 * @size: the size of the array to be created
 * @c: the character to initialize the array with
 *
 * Return: pointer to array, NULL if size is zero or memory allocation fails
 */

char *create_array(unsigned int size, char c);
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
